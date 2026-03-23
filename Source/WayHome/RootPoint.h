#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RootPoint.generated.h"

/**
 * 徘徊ポイントを保持するアクター（エディタ上でギズモ編集可）
 */
UCLASS()
class WAYHOME_API ARootPoint : public AActor
{
    GENERATED_BODY()

public:
    ARootPoint();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void OnConstruction(const FTransform& Transform) override;

    /** 配列サイズ（ポイント数） */
    UFUNCTION(BlueprintPure, Category = "AI|Roaming")
    int32 PointNum() const { return RoamingPointsLocal.Num(); }

    /** ローカル座標で取得（範囲外は Zero） */
    UFUNCTION(BlueprintPure, Category = "AI|Roaming")
    FVector GetRoamingPointLocal(int32 Index) const;

    /** ワールド座標で取得（範囲外はアクター位置） */
    UFUNCTION(BlueprintPure, Category = "AI|Roaming")
    FVector GetRoamingPointWorld(int32 Index) const;

    /** ランダム（ワールド） */
    UFUNCTION(BlueprintPure, Category = "AI|Roaming")
    FVector GetRandomRoamingPointWorld() const;

    /** 最も近い点（ワールド） */
    UFUNCTION(BlueprintPure, Category = "AI|Roaming")
    FVector GetNearestRoamingPointWorld(const FVector& FromLocation) const;

    /** RoamingPoint と同名のラッパ（ワールド） */
    UFUNCTION(BlueprintPure, Category = "AI|Roaming", meta = (DisplayName = "GetRoamingPoint (World)"))
    FVector GetRoamingPoint(int32 Index) const { return GetRoamingPointWorld(Index); }

private:
    /** エディタで配置可能（ローカル座標保存） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Roaming",
        meta = (MakeEditWidget = "true", AllowPrivateAccess = "true"))
    TArray<FVector> RoamingPointsLocal;

    /** ▼エディタ専用データは WITH_EDITORONLY_DATA を使う */
#if WITH_EDITORONLY_DATA
    /** エディタ上でデバッグ描画するか */
    UPROPERTY(EditAnywhere, Category = "AI|Roaming|Debug")
    bool bDrawDebugInEditor = true;

    /** デバッグ描画の色・サイズ（必要なら） */
    UPROPERTY(EditAnywhere, Category = "AI|Roaming|Debug", meta = (ClampMin = "4.0", UIMin = "4.0"))
    float DebugSphereRadius = 12.f;
#endif
};