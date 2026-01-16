
// MyActor.cpp
#include "MyActor.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Engine/World.h"         // Spawn等で必要なことが多い
#include "Engine/StaticMesh.h"    // メッシュ型参照時に安全


// 文字列 → 列挙型
static ECellType StringToCellType(const FString& S)
{
    if (S.Equals(TEXT("Empty"), ESearchCase::IgnoreCase)) return ECellType::Empty;
    if (S.Equals(TEXT("Wall"), ESearchCase::IgnoreCase)) return ECellType::Wall;
    if (S.Equals(TEXT("Floor"), ESearchCase::IgnoreCase)) return ECellType::Floor;
    if (S.Equals(TEXT("Spawn"), ESearchCase::IgnoreCase)) return ECellType::Spawn;
    if (S.Equals(TEXT("Goal"), ESearchCase::IgnoreCase)) return ECellType::Goal;
    return ECellType::Empty;
}

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AMyActor::BuildFromCsv()
{
    // 1) パス解決（相対は ProjectDir 基準）
    const FString GridAbs = FPaths::IsRelative(GridCsvPath.FilePath)
        ? FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), GridCsvPath.FilePath)
        : GridCsvPath.FilePath;

    const FString TypeAbs = FPaths::IsRelative(TypeMapCsvPath.FilePath)
        ? FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), TypeMapCsvPath.FilePath)
        : TypeMapCsvPath.FilePath;

    // 2) 読み込み
    GridCells.Reset();
    TypeMap.Reset();

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

    // 3) BPプリプロセス
    BP_OnPreBuild();

    // 4) 各セルをワールド座標に変換してBPへ
    for (const FGridCell& Cell : GridCells)
    {
        const FCellTypeInfo* Info = TypeMap.Find(Cell.Code);
        if (!Info || Info->CellType == ECellType::Empty)
        {
            continue; // 未定義 or 空セルはスキップ
        }

        const float WorldX = static_cast<float>(Cell.X) * CellSizeX;
        const float WorldY = static_cast<float>(Cell.Y) * CellSizeY;
        const float WorldZ = BaseZ + Info->DefaultHeight;

        const FRotator Rot(Info->RotPitch, Info->RotYaw, Info->RotRoll);
        const FVector  Loc(WorldX, WorldY, WorldZ);
        const FVector  Scl(Info->ScaleX, Info->ScaleY, Info->ScaleZ);

        const FTransform Xform(Rot, Loc, Scl);
        BP_PlaceByType(*Info, Xform);
    }

    // 5) ポストプロセス
    BP_OnPostBuild();
}

bool AMyActor::LoadGridCsv(const FString& AbsPath)
{
    FString CsvText;
    if (!FFileHelper::LoadFileToString(CsvText, *AbsPath))
    {
        UE_LOG(LogTemp, Error, TEXT("Cannot read Grid CSV: %s"), *AbsPath);
        return false;
    }

    TArray<FString> Lines;
    CsvText.ParseIntoArrayLines(Lines, true);

    if (Lines.Num() <= 1)
    {
        UE_LOG(LogTemp, Error, TEXT("Grid CSV empty or header missing."));
        return false;
    }

    // ヘッダ
    TArray<FString> Header;
    Lines[0].ParseIntoArray(Header, TEXT(","), true);

    // 必須列：RowName(不要), X, Y, Code
    const int32 XIdx = Header.Find(TEXT("X"));
    const int32 YIdx = Header.Find(TEXT("Y"));
    const int32 CodeIdx = Header.Find(TEXT("Code"));

    if (XIdx == INDEX_NONE || YIdx == INDEX_NONE || CodeIdx == INDEX_NONE)
    {
        UE_LOG(LogTemp, Error, TEXT("Grid CSV header mismatch. Need X,Y,Code."));
        return false;
    }

    for (int32 i = 1; i < Lines.Num(); ++i)
    {
        TArray<FString> Cols;
        Lines[i].ParseIntoArray(Cols, TEXT(","), true);

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

    TArray<FString> Lines;
    CsvText.ParseIntoArrayLines(Lines, true);

    if (Lines.Num() <= 1)
    {
        UE_LOG(LogTemp, Error, TEXT("TypeMap CSV empty or header missing."));
        return false;
    }

    // ヘッダ
    TArray<FString> Header;
    Lines[0].ParseIntoArray(Header, TEXT(","), true);

    // 必須列
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

    for (int32 i = 1; i < Lines.Num(); ++i)
    {
        TArray<FString> Cols;
        Lines[i].ParseIntoArray(Cols, TEXT(","), true);

        FCellTypeInfo Info;
        if (ParseTypeMapLine(Cols, Header, Info))
        {
            TypeMap.Add(Info.Code, Info);
        }
    }
    return true;
}

bool AMyActor::ParseCsvLine(const TArray<FString>& Columns, const TArray<FString>& Header, FGridCell& OutCell)
{
    const int32 XIdx = Header.Find(TEXT("X"));
    const int32 YIdx = Header.Find(TEXT("Y"));
    const int32 CodeIdx = Header.Find(TEXT("Code"));

    if (!Columns.IsValidIndex(XIdx) || !Columns.IsValidIndex(YIdx) || !Columns.IsValidIndex(CodeIdx))
    {
        return false;
    }

    const FString& XStr = Columns[XIdx];
    const FString& YStr = Columns[YIdx];
    const FString& CodeStr = Columns[CodeIdx];

    if (XStr.IsEmpty() || YStr.IsEmpty() || CodeStr.IsEmpty())
    {
        return false;
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

    auto GetSafe = [&Columns](int32 Idx) -> FString
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
        return false;
    }

    OutInfo.Code = FCString::Atoi(*CodeStr);
    OutInfo.CellType = StringToCellType(CTStr);
    OutInfo.RotPitch = PitchStr.IsEmpty() ? 0.f : FCString::Atof(*PitchStr);
    OutInfo.RotYaw = YawStr.IsEmpty() ? 0.f : FCString::Atof(*YawStr);
    OutInfo.RotRoll = RollStr.IsEmpty() ? 0.f : FCString::Atof(*RollStr);
    OutInfo.ScaleX = SXStr.IsEmpty() ? 1.f : FCString::Atof(*SXStr);
    OutInfo.ScaleY = SYStr.IsEmpty() ? 1.f : FCString::Atof(*SYStr);
    OutInfo.ScaleZ = SZStr.IsEmpty() ? 1.f : FCString::Atof(*SZStr);
    OutInfo.DefaultHeight = DHStr.IsEmpty() ? 0.f : FCString::Atof(*DHStr);
    OutInfo.Tag = FName(TagStr.IsEmpty() ? TEXT("None") : *TagStr);

    return true;
}
