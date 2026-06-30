// MyActor.cpp
#include "MyActor.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Engine/World.h"

AMyActor::AMyActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    if (!bBuildOnBeginPlay) return;
    if (bServerOnlyBuild && GetNetMode() == NM_Client) return;

    static bool bBuilding = false;
    if (bBuilding) return;
    TGuardValue<bool> Guard(bBuilding, true);

    BuildFromCsv();
}



TArray<FString> AMyActor::SplitCsvLine(const FString& Line)
{
    TArray<FString> Cells;
    Line.ParseIntoArray(Cells, TEXT(","), false);
    for (FString& C : Cells)
    {
        C.TrimStartAndEndInline();
        if (!C.IsEmpty() && C[0] == 0xFEFF)
        {
            C.RemoveAt(0);
        }
    }
    return Cells;
}

ECellType AMyActor::IntToCellType(int32 V)
{
    switch (V)
    {

    case 0:     return ECellType::Empty;
    case 1:     return ECellType::Wall;
    case 2:     return ECellType::Floor;
    case 3:     return ECellType::PlayerSpawn;
    case 4:     return ECellType::EnemySpawn;
    case 5:     return ECellType::Shop_W;
    case 6:     return ECellType::Shop_A;
    case 7:     return ECellType::Shop_S;
    case 8:     return ECellType::Shop_D;
    case 9:     return ECellType::Goal_W;
    case 10:    return ECellType::Goal_A;
    case 11:    return ECellType::Goal_S;
    case 12:    return ECellType::Goal_D;

    default: return ECellType::Empty;

    }
}

ECellType AMyActor::StringToCellTypeLoose(const FString& S)
{
    if (S.IsNumeric()) return IntToCellType(FCString::Atoi(*S));
    if (S.Equals(TEXT("Empty"),         ESearchCase::IgnoreCase)) return ECellType::Empty;
    if (S.Equals(TEXT("Wall"),          ESearchCase::IgnoreCase)) return ECellType::Wall;
    if (S.Equals(TEXT("Floor"),         ESearchCase::IgnoreCase)) return ECellType::Floor;
    if (S.Equals(TEXT("PlayerSpawn"),   ESearchCase::IgnoreCase)) return ECellType::PlayerSpawn;
    if (S.Equals(TEXT("EnemySpawn"),    ESearchCase::IgnoreCase)) return ECellType::EnemySpawn;
    if (S.Equals(TEXT("Shop_W"),        ESearchCase::IgnoreCase)) return ECellType::Shop_W;
    if (S.Equals(TEXT("Shop_A"),        ESearchCase::IgnoreCase)) return ECellType::Shop_A;
    if (S.Equals(TEXT("Shop_S"),        ESearchCase::IgnoreCase)) return ECellType::Shop_S;
    if (S.Equals(TEXT("Shop_D"),        ESearchCase::IgnoreCase)) return ECellType::Shop_D;
    if (S.Equals(TEXT("Goal_W"),        ESearchCase::IgnoreCase)) return ECellType::Goal_W;
    if (S.Equals(TEXT("Goal_A"),        ESearchCase::IgnoreCase)) return ECellType::Goal_A;
    if (S.Equals(TEXT("Goal_S"),        ESearchCase::IgnoreCase)) return ECellType::Goal_S;
    if (S.Equals(TEXT("Goal_D"),        ESearchCase::IgnoreCase)) return ECellType::Goal_D;
   
    return ECellType::Empty;
}

//ビルド処理部分
void AMyActor::BuildFromCsv()
{
    GridCells.Reset();
    TypeMap.Reset();

    const FString GridAbs = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), GridCsvPath.FilePath);
    const FString TypeAbs = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), TypeMapCsvPath.FilePath);

    if (!LoadGridCsv(GridAbs)) return;
    if (!LoadTypeMapCsv(TypeAbs)) return;

    BP_OnPreBuild();
    for (const FGridCell& Cell : GridCells)
    {
        const FCellTypeInfo* Info = TypeMap.Find(Cell.Code);
        if (!Info || Info->CellType == ECellType::Empty) continue;

        const FVector LocalLoc(
            Cell.X * CellSizeX,
            Cell.Y * CellSizeY,
            Cell.Z * CellSizeZ + Info->DefaultHeight
        );

        const FTransform LocalXform(
            FRotator(Info->RotPitch, Info->RotYaw, Info->RotRoll),
            LocalLoc,
            FVector(Info->ScaleX, Info->ScaleY, Info->ScaleZ)
        );

        BP_PlaceByType(*Info, LocalXform * GetActorTransform());
    }

    BP_OnPostBuild();
}


//CSVロード処理部分
bool AMyActor::LoadGridCsv(const FString& AbsPath)
{
    FString Text;
    if (!FFileHelper::LoadFileToString(Text, *AbsPath)) return false;

    TArray<FString> Lines;
    Text.ParseIntoArrayLines(Lines, true);
    if (Lines.Num() <= 1) return false;

    TArray<FString> Header = SplitCsvLine(Lines[0]);

    for (int32 i = 1; i < Lines.Num(); ++i)
    {
        FGridCell Cell;
        if (ParseCsvLine(SplitCsvLine(Lines[i]), Header, Cell))
        {
            GridCells.Add(Cell);
        }
    }
    return true;
}

bool AMyActor::LoadTypeMapCsv(const FString& AbsPath)
{
    FString Text;
    if (!FFileHelper::LoadFileToString(Text, *AbsPath)) return false;

    TArray<FString> Lines;
    Text.ParseIntoArrayLines(Lines, true);
    if (Lines.Num() <= 1) return false;

    TArray<FString> Header = SplitCsvLine(Lines[0]);

    for (int32 i = 1; i < Lines.Num(); ++i)
    {
        FCellTypeInfo Info;
        if (ParseTypeMapLine(SplitCsvLine(Lines[i]), Header, Info))
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
    const int32 ZIdx = Header.Find(TEXT("Z"));
    const int32 CodeIdx = Header.Find(TEXT("Code"));

    if (!Columns.IsValidIndex(XIdx) || !Columns.IsValidIndex(YIdx) ||
        !Columns.IsValidIndex(ZIdx) || !Columns.IsValidIndex(CodeIdx))
    {
        return false;
    }

    OutCell.X = FCString::Atoi(*Columns[XIdx]);
    OutCell.Y = FCString::Atoi(*Columns[YIdx]);
    OutCell.Z = FCString::Atoi(*Columns[ZIdx]);
    OutCell.Code = FCString::Atoi(*Columns[CodeIdx]);

    return true;
}

bool AMyActor::ParseTypeMapLine(const TArray<FString>& Columns, const TArray<FString>& Header, FCellTypeInfo& OutInfo)
{
    auto Get = [&](const TCHAR* Name) -> FString
        {
            int32 Idx = Header.Find(Name);
            return (Idx != INDEX_NONE && Columns.IsValidIndex(Idx)) ? Columns[Idx] : FString();
        };

    const FString CodeStr = Get(TEXT("Code"));
    if (CodeStr.IsEmpty()) return false;

    OutInfo.Code = FCString::Atoi(*CodeStr);
    OutInfo.CellType = StringToCellTypeLoose(Get(TEXT("CellType")));
    OutInfo.RotPitch = FCString::Atof(*Get(TEXT("RotPitch")));
    OutInfo.RotYaw = FCString::Atof(*Get(TEXT("RotYaw")));
    OutInfo.RotRoll = FCString::Atof(*Get(TEXT("RotRoll")));
    OutInfo.ScaleX = FCString::Atof(*Get(TEXT("ScaleX")));
    OutInfo.ScaleY = FCString::Atof(*Get(TEXT("ScaleY")));
    OutInfo.ScaleZ = FCString::Atof(*Get(TEXT("ScaleZ")));
    OutInfo.DefaultHeight = FCString::Atof(*Get(TEXT("DefaultHeight")));
    OutInfo.Tag = FName(*Get(TEXT("Tag")));

    return true;
}