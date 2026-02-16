// MyActor.cpp
#include "MyActor.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"

// =======================
// コンストラクタ
// =======================
AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

// =======================
// 方式B：ゲーム開始時に自動ビルド
// =======================
void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    if (!bBuildOnBeginPlay)
    {
        UE_LOG(LogTemp, Log, TEXT("[CSV] BeginPlay: bBuildOnBeginPlay=false, skip."));
        return;
    }

    // PIE/ネットワーク環境の多重実行を抑制（サーバ側のみ実行）
    if (bServerOnlyBuild)
    {
        const ENetMode NM = GetNetMode();
        if (NM == NM_Client)
        {
            UE_LOG(LogTemp, Log, TEXT("[CSV] BeginPlay: Client, skip by bServerOnlyBuild."));
            return;
        }
    }

    // 再入防止（同フレーム/多重 BeginPlay 対策）
    static bool bInBuild = false;
    if (bInBuild)
    {
        UE_LOG(LogTemp, Warning, TEXT("[CSV] BeginPlay: Re-entry blocked."));
        return;
    }
    TGuardValue<bool> Guard(bInBuild, true);

    UE_LOG(LogTemp, Log, TEXT("[CSV] BeginPlay: Trigger BuildFromCsv()"));
    BuildFromCsv();
}

// =======================
// CSV ユーティリティ群
// =======================

/**
 * 1 行をカンマで分割。
 * - CullEmpty=false：空セルを保持（列ずれ防止）
 * - Trim：前後空白除去
 * - 先頭 BOM 除去：UTF-8(BOM) でも安全
 */
TArray<FString> AMyActor::SplitCsvLine(const FString& Line)
{
    TArray<FString> Cells;
    Line.ParseIntoArray(Cells, TEXT(","), /*CullEmpty=*/false);
    for (FString& C : Cells)
    {
        C.TrimStartAndEndInline();
        if (!C.IsEmpty() && C[0] == 0xFEFF) // 先頭 BOM
        {
            C.RemoveAt(0);
        }
    }
    return Cells;
}

/** 整数 → 列挙（範囲外は Empty） */
ECellType AMyActor::IntToCellType(int32 V)
{
    switch (V)
    {
    case 0: return ECellType::Empty;
    case 1: return ECellType::Wall;
    case 2: return ECellType::Floor;
    case 3: return ECellType::Spawn;
    case 4: return ECellType::Goal;
    default: return ECellType::Empty;
    }
}

/**
 * 文字列 → 列挙の緩和変換
 * - 数値文字列（"0"〜"4"）は IntToCellType へ
 * - "Empty"/"Wall"/... にも対応
 */
ECellType AMyActor::StringToCellTypeLoose(const FString& S)
{
    if (S.IsEmpty()) return ECellType::Empty;

    if (S.IsNumeric()) // "0"〜"4"
    {
        return IntToCellType(FCString::Atoi(*S));
    }

    if (S.Equals(TEXT("Empty"), ESearchCase::IgnoreCase)) return ECellType::Empty;
    if (S.Equals(TEXT("Wall"), ESearchCase::IgnoreCase)) return ECellType::Wall;
    if (S.Equals(TEXT("Floor"), ESearchCase::IgnoreCase)) return ECellType::Floor;
    if (S.Equals(TEXT("Spawn"), ESearchCase::IgnoreCase)) return ECellType::Spawn;
    if (S.Equals(TEXT("Goal"), ESearchCase::IgnoreCase)) return ECellType::Goal;

    return ECellType::Empty;
}

// =======================
// 本体：CSV→配置
// =======================
void AMyActor::BuildFromCsv()
{
    UE_LOG(LogTemp, Warning, TEXT("[CSV] BuildFromCsv STARTED"));

    // === パス解決 ===
    const FString GridAbs = FPaths::IsRelative(GridCsvPath.FilePath)
        ? FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), GridCsvPath.FilePath)
        : GridCsvPath.FilePath;

    const FString TypeAbs = FPaths::IsRelative(TypeMapCsvPath.FilePath)
        ? FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), TypeMapCsvPath.FilePath)
        : TypeMapCsvPath.FilePath;

    // === 読み込み前にクリア ===
    GridCells.Reset();
    TypeMap.Reset();

    FloorWorldPoints.Reset();

    // === CSV 読み込み ===
    if (!LoadGridCsv(GridAbs))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load Grid CSV: %s"), *GridAbs);
        return;
    }
    if (!LoadTypeMapCsv(TypeAbs))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load TypeMap CSV: %s"), *TypeAbs);
        return;
    }

    // === 読み込み後の件数 ===
    UE_LOG(LogTemp, Warning, TEXT("[CSV] AFTER LOAD: GridCells=%d  TypeMap=%d"),
        GridCells.Num(), TypeMap.Num());

    // === BP プリ処理 ===
    BP_OnPreBuild();

    // === デバッグカウンタ ===
    int32 Passed = 0;
    int32 SkipNoInfo = 0;
    int32 SkipEmpty = 0;

    // === メインループ ===
    for (const FGridCell& Cell : GridCells)
    {
        const FCellTypeInfo* Info = TypeMap.Find(Cell.Code);

        if (!Info)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("[CSV] SKIP(no TypeMap) Code=%d at (%d,%d)"),
                Cell.Code, Cell.X, Cell.Y);
            ++SkipNoInfo;
            continue;
        }

        if (Info->CellType == ECellType::Empty)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("[CSV] SKIP(CellType=Empty) Code=%d at (%d,%d)"),
                Cell.Code, Cell.X, Cell.Y);
            ++SkipEmpty;
            continue;
        }

        // ---- 通過セル（PlaceByType 呼び出し対象） ----
        ++Passed;

        // ローカル座標
        const FVector  LocalLoc(
            static_cast<double>(Cell.X) * CellSizeX,
            static_cast<double>(Cell.Y) * CellSizeY,
            BaseZ + Info->DefaultHeight);

        const FRotator LocalRot(Info->RotPitch, Info->RotYaw, Info->RotRoll);
        const FVector  LocalScl(Info->ScaleX, Info->ScaleY, Info->ScaleZ);

        const FTransform LocalXform(LocalRot, LocalLoc, LocalScl);
        const FTransform WorldXform = LocalXform * GetActorTransform();


        if (Info->CellType == ECellType::Floor)
        {
            FloorWorldPoints.Add(WorldXform.GetLocation());
        }


        // 実際の生成は BP 側（Switch/Add/Spawn/Attach）で行う
        BP_PlaceByType(*Info, WorldXform);
    }

    // === ループ総括 ===
    UE_LOG(LogTemp, Warning,
        TEXT("[CSV] LOOP SUMMARY: Passed=%d  SkipNoInfo=%d  SkipEmpty=%d"),
        Passed, SkipNoInfo, SkipEmpty);

    // === BP ポスト処理 ===
    BP_OnPostBuild();
}

// =======================
// CSV 読み込み系
// =======================
bool AMyActor::LoadGridCsv(const FString& AbsPath)
{
    FString CsvText;
    if (!FFileHelper::LoadFileToString(CsvText, *AbsPath))
    {
        UE_LOG(LogTemp, Error, TEXT("Cannot read Grid CSV: %s"), *AbsPath);
        return false;
    }

    // 行に分割（空行は除去）
    TArray<FString> RawLines;
    CsvText.ParseIntoArrayLines(RawLines, /*bCullEmpty=*/true);

    if (RawLines.Num() <= 1)
    {
        UE_LOG(LogTemp, Error, TEXT("Grid CSV empty or header missing."));
        return false;
    }

    // ヘッダ（空セルを保持・Trim・BOM 除去）
    const TArray<FString> Header = SplitCsvLine(RawLines[0]);

    // 必須列：X, Y, Code
    const int32 XIdx = Header.Find(TEXT("X"));
    const int32 YIdx = Header.Find(TEXT("Y"));
    const int32 CodeIdx = Header.Find(TEXT("Code"));
    if (XIdx == INDEX_NONE || YIdx == INDEX_NONE || CodeIdx == INDEX_NONE)
    {
        UE_LOG(LogTemp, Error, TEXT("Grid CSV header mismatch. Need X,Y,Code."));
        return false;
    }

    // データ行を 1 行ずつパース
    for (int32 i = 1; i < RawLines.Num(); ++i)
    {
        const TArray<FString> Cols = SplitCsvLine(RawLines[i]);

        FGridCell Cell;
        if (ParseCsvLine(Cols, Header, Cell))
        {
            GridCells.Add(Cell);
        }
    }
    return true;
}

bool AMyActor::LoadTypeMapCsv(const FString& AbsPath)
{
    FString CsvText;
    if (!FFileHelper::LoadFileToString(CsvText, *AbsPath))
    {
        UE_LOG(LogTemp, Error, TEXT("Cannot read TypeMap CSV: %s"), *AbsPath);
        return false;
    }

    TArray<FString> RawLines;
    CsvText.ParseIntoArrayLines(RawLines, /*bCullEmpty=*/true);

    if (RawLines.Num() <= 1)
    {
        UE_LOG(LogTemp, Error, TEXT("TypeMap CSV empty or header missing."));
        return false;
    }

    // ヘッダ
    const TArray<FString> Header = SplitCsvLine(RawLines[0]);

    // 必須列のインデックス（列名は完全一致）
    const int32 CodeIdx = Header.Find(TEXT("Code"));
    const int32 CellTypeIdx = Header.Find(TEXT("CellType"));
    const int32 PitchIdx = Header.Find(TEXT("RotPitch"));
    const int32 YawIdx = Header.Find(TEXT("RotYaw"));
    const int32 RollIdx = Header.Find(TEXT("RotRoll"));
    const int32 SXIdx = Header.Find(TEXT("ScaleX"));
    const int32 SYIdx = Header.Find(TEXT("ScaleY"));
    const int32 SZIdx = Header.Find(TEXT("ScaleZ"));
    const int32 DHIdx = Header.Find(TEXT("DefaultHeight"));
    const int32 TagIdx = Header.Find(TEXT("Tag"));

    if (CodeIdx == INDEX_NONE || CellTypeIdx == INDEX_NONE ||
        PitchIdx == INDEX_NONE || YawIdx == INDEX_NONE || RollIdx == INDEX_NONE ||
        SXIdx == INDEX_NONE || SYIdx == INDEX_NONE || SZIdx == INDEX_NONE ||
        DHIdx == INDEX_NONE || TagIdx == INDEX_NONE)
    {
        UE_LOG(LogTemp, Error, TEXT("TypeMap CSV header mismatch."));
        return false;
    }

    for (int32 i = 1; i < RawLines.Num(); ++i)
    {
        const TArray<FString> Cols = SplitCsvLine(RawLines[i]);

        FCellTypeInfo Info;
        if (ParseTypeMapLine(Cols, Header, Info))
        {
            // Code 重複は上書き（CSV 側の最後の定義が勝つ）
            TypeMap.Add(Info.Code, Info);
        }
    }
    return true;
}

// =======================
// 1 行パース
// =======================
bool AMyActor::ParseCsvLine(const TArray<FString>& Columns, const TArray<FString>& Header, FGridCell& OutCell)
{
    const int32 XIdx = Header.Find(TEXT("X"));
    const int32 YIdx = Header.Find(TEXT("Y"));
    const int32 CodeIdx = Header.Find(TEXT("Code"));

    if (!Columns.IsValidIndex(XIdx) || !Columns.IsValidIndex(YIdx) || !Columns.IsValidIndex(CodeIdx))
    {
        return false; // 列欠落 or 行の列数不足
    }

    const FString& XStr = Columns[XIdx];
    const FString& YStr = Columns[YIdx];
    const FString& CodeStr = Columns[CodeIdx];

    if (XStr.IsEmpty() || YStr.IsEmpty() || CodeStr.IsEmpty())
    {
        return false; // 空セルは無視
    }

    OutCell.X = FCString::Atoi(*XStr);
    OutCell.Y = FCString::Atoi(*YStr);
    OutCell.Code = FCString::Atoi(*CodeStr);
    return true;
}

bool AMyActor::ParseTypeMapLine(const TArray<FString>& Columns, const TArray<FString>& Header, FCellTypeInfo& OutInfo)
{
    const int32 CodeIdx = Header.Find(TEXT("Code"));
    const int32 CellTypeIdx = Header.Find(TEXT("CellType"));
    const int32 PitchIdx = Header.Find(TEXT("RotPitch"));
    const int32 YawIdx = Header.Find(TEXT("RotYaw"));
    const int32 RollIdx = Header.Find(TEXT("RotRoll"));
    const int32 SXIdx = Header.Find(TEXT("ScaleX"));
    const int32 SYIdx = Header.Find(TEXT("ScaleY"));
    const int32 SZIdx = Header.Find(TEXT("ScaleZ"));
    const int32 DHIdx = Header.Find(TEXT("DefaultHeight"));
    const int32 TagIdx = Header.Find(TEXT("Tag"));

    auto GetSafe = [&](int32 Idx) -> FString
        {
            return (Idx != INDEX_NONE && Columns.IsValidIndex(Idx)) ? Columns[Idx] : FString();
        };

    const FString CodeStr = GetSafe(CodeIdx);
    const FString CTStr = GetSafe(CellTypeIdx);
    const FString PitchStr = GetSafe(PitchIdx);
    const FString YawStr = GetSafe(YawIdx);
    const FString RollStr = GetSafe(RollIdx);
    const FString SXStr = GetSafe(SXIdx);
    const FString SYStr = GetSafe(SYIdx);
    const FString SZStr = GetSafe(SZIdx);
    const FString DHStr = GetSafe(DHIdx);
    const FString TagStr = GetSafe(TagIdx);

    if (CodeStr.IsEmpty() || CTStr.IsEmpty())
    {
        return false; // 必須列不足
    }

    // Code
    OutInfo.Code = FCString::Atoi(*CodeStr);

    // CellType（数値優先。文字列の場合は後方互換の緩和変換）
    OutInfo.CellType = CTStr.IsNumeric()
        ? IntToCellType(FCString::Atoi(*CTStr))
        : StringToCellTypeLoose(CTStr);

    // 角度・スケール・高さ（空ならデフォルト値）
    OutInfo.RotPitch = PitchStr.IsEmpty() ? 0.f : FCString::Atof(*PitchStr);
    OutInfo.RotYaw = YawStr.IsEmpty() ? 0.f : FCString::Atof(*YawStr);
    OutInfo.RotRoll = RollStr.IsEmpty() ? 0.f : FCString::Atof(*RollStr);

    OutInfo.ScaleX = SXStr.IsEmpty() ? 1.f : FCString::Atof(*SXStr);
    OutInfo.ScaleY = SYStr.IsEmpty() ? 1.f : FCString::Atof(*SYStr);
    OutInfo.ScaleZ = SZStr.IsEmpty() ? 1.f : FCString::Atof(*SZStr);

    OutInfo.DefaultHeight = DHStr.IsEmpty() ? 0.f : FCString::Atof(*DHStr);

    // Tag（空なら "None"）
    OutInfo.Tag = FName(TagStr.IsEmpty() ? TEXT("None") : *TagStr);

    return true;
}