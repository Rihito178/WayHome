
// MyActor.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// FFilePath 用
#include "Engine/EngineTypes.h"

// Softポインタ用
#include "UObject/SoftObjectPtr.h"

#include "MyActor.generated.h"

// 前方宣言（依存軽量化）
class UStaticMesh;

/**
 * グリッドのセル種別
 */
UENUM(BlueprintType)
enum class ECellType : uint8
{
    Empty = 0,
    Wall = 1,
    Floor = 2,
    Spawn = 3,
    Goal = 4
};

/**
 * TypeMap の1行
 * CSV: RowName,Code,CellType,RotPitch,RotYaw,RotRoll,ScaleX,ScaleY,ScaleZ,DefaultHeight,Tag
 */
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

    // 拡張用（任意）
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> BPClass;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> Mesh;
};

/**
 * グリッドの1セル
 * CSV: RowName,X,Y,Code
 */
USTRUCT(BlueprintType)
struct FGridCell
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 X = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Y = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Code = 0;
};

/**
 * 重要：APIマクロはプロジェクトのモジュール名に合わせる
 * 例）WayHome → WAYHOME_API / MyProject → MYPROJECT_API
 */
UCLASS()
class WAYHOME_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor();

    // === 入力CSVパス ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
    FFilePath GridCsvPath;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
    FFilePath TypeMapCsvPath;

    // === グリッド設定 ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSizeX = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSizeY = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float BaseZ = 0.f; // 床面のZ

    // 実行トリガ
    UFUNCTION(BlueprintCallable, Category = "Build")
    void BuildFromCsv();

protected:
    // BP側で実装するイベント（C++から呼ぶ）
    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_OnPreBuild();

    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_PlaceByType(const FCellTypeInfo& TypeInfo, const FTransform& Transform);

    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_OnPostBuild();

private:
    // 内部データ
    TArray<FGridCell> GridCells;
    TMap<int32, FCellTypeInfo> TypeMap;

    bool LoadGridCsv(const FString& AbsPath);
    bool LoadTypeMapCsv(const FString& AbsPath);
    bool ParseCsvLine(const TArray<FString>& Columns, const TArray<FString>& Header, FGridCell& OutCell);
    bool ParseTypeMapLine(const TArray<FString>& Columns, const TArray<FString>& Header, FCellTypeInfo& OutInfo);
};
