// MyActor.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"      // FFilePath 用
#include "UObject/SoftObjectPtr.h"   // TSoft* 用
#include "MyActor.generated.h"

// 前方宣言（ヘッダ依存の軽量化）
class UStaticMesh;

/**
 * グリッドのセル種別
 * - CSV の "CellType" 列と対応（数値/文字列どちらでもパース可：実装は .cpp 側）
 * - 値は 0〜4 を固定（将来 CSV の数値運用にも安全）
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
 * TypeMap の 1 行分（属性定義）
 * CSV 列：RowName,Code,CellType,RotPitch,RotYaw,RotRoll,ScaleX,ScaleY,ScaleZ,DefaultHeight,Tag
 * - Code: Grid の Code（0〜4）に一致
 * - CellType: 上記列挙。CSV は "0" / "Empty" など数値/文字列両対応
 */
USTRUCT(BlueprintType)
struct FCellTypeInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32     Code = 0;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECellType CellType = ECellType::Empty;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotPitch = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotYaw = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotRoll = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleX = 1.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleY = 1.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScaleZ = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultHeight = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Tag = NAME_None;

    // 将来拡張（CSV からパスを読み込んで Soft 参照解決等したい場合に使用）
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor>       BPClass;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> Mesh;
};

/**
 * グリッドの 1 セル（配置対象）
 * CSV 列：RowName,X,Y,Code
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
 * API マクロはプロジェクトのモジュール名に合わせて変更してください。
 * 例）WayHome → WAYHOME_API / MyProject → MYPROJECT_API
 */
UCLASS()
class WAYHOME_API AMyActor : public AActor
{
    GENERATED_BODY()

public:
    AMyActor();

    // === 入力 CSV パス（相対は ProjectDir 基準） ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
    FFilePath GridCsvPath;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
    FFilePath TypeMapCsvPath;

    // === グリッド設定（アクター基準のローカル座標→アクター TRS を乗算） ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSizeX = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSizeY = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float BaseZ = 0.f; // ローカル Z の基準高さ

    // === 起動時自動ビルド（方式B） ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build")
    bool bBuildOnBeginPlay = false;   // 起動時に BuildFromCsv を自動実行

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Build")
    bool bServerOnlyBuild = true;     // サーバ側のみ実行（PIE/マルチの多重防止）

    // 手動トリガ（エディタの Details から押下可）
    UFUNCTION(BlueprintCallable, CallInEditor, Category = "Build")
    void BuildFromCsv();

protected:
    // 方式B：BeginPlay で制御
    virtual void BeginPlay() override;

    // BP 側で実装する 3 つのイベント
    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_OnPreBuild();

    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_PlaceByType(const FCellTypeInfo& TypeInfo, const FTransform& Transform);

    UFUNCTION(BlueprintImplementableEvent, Category = "Build")
    void BP_OnPostBuild();

private:
    // ロード後の内部データ
    TArray<FGridCell>          GridCells; // グリッド全セル（Empty も含む）
    TMap<int32, FCellTypeInfo> TypeMap;   // Code → TypeInfo

    // CSV ローダ
    bool LoadGridCsv(const FString& AbsPath);
    bool LoadTypeMapCsv(const FString& AbsPath);

    // 1 行パース
    bool ParseCsvLine(const TArray<FString>& Columns, const TArray<FString>& Header, FGridCell& OutCell);
    bool ParseTypeMapLine(const TArray<FString>& Columns, const TArray<FString>& Header, FCellTypeInfo& OutInfo);

    // CSV ユーティリティ
    static TArray<FString> SplitCsvLine(const FString& Line); // 空列保持・Trim・BOM 除去
    static ECellType       IntToCellType(int32 V);            // 0〜4 以外は Empty
    static ECellType       StringToCellTypeLoose(const FString& S); // 文字列/数値文字列の両対応
};