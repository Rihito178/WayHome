// MyActor.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "MyActor.generated.h"

class UStaticMesh;

UENUM(BlueprintType)
enum class ECellType : uint8
{
    Empty = 0,
    Wall = 1,
    Floor = 2,
    PlayerSpawn = 3,
    EnemySpawn = 4,
    Shop_W = 5,
    Shop_A= 6,
    Shop_S= 7,
    Shop_D= 8,
    Goal_W= 9,
    Goal_A= 10,
    Goal_S= 11,
    Goal_D= 12

};

USTRUCT(BlueprintType)
struct FCellTypeInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Code = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECellType CellType = ECellType::Empty;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotPitch = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotYaw = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotRoll = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleX = 1.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleY = 1.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleZ = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultHeight = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Tag = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> BPClass;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> Mesh;
};

USTRUCT(BlueprintType)
struct FGridCell
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 X = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Y = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Z = 0;   // ★ X/Y と同列の Z
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Code = 0;
};

UCLASS()
class WAYHOME_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor();

    // CSV paths
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
    FFilePath GridCsvPath;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
    FFilePath TypeMapCsvPath;

    // Grid settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSizeX = 400.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSizeY = 400.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSizeZ = 1.f;

    // Build options
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build")
    bool bBuildOnBeginPlay = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build")
    bool bServerOnlyBuild = true;

    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Build")
    void BuildFromCsv();

protected:
    virtual void BeginPlay() override;

    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_OnPreBuild();

    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_PlaceByType(const FCellTypeInfo& TypeInfo, const FTransform& Transform);

    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_OnPostBuild();

private:
    TArray<FGridCell> GridCells;
    TMap<int32, FCellTypeInfo> TypeMap;

    bool LoadGridCsv(const FString& AbsPath);
    bool LoadTypeMapCsv(const FString& AbsPath);

    bool ParseCsvLine(const TArray<FString>& Columns, const TArray<FString>& Header, FGridCell& OutCell);
    bool ParseTypeMapLine(const TArray<FString>& Columns, const TArray<FString>& Header, FCellTypeInfo& OutInfo);

    static TArray<FString> SplitCsvLine(const FString& Line);
    static ECellType IntToCellType(int32 V);
    static ECellType StringToCellTypeLoose(const FString& S);
};