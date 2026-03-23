#include "RootPoint.h"
#include "DrawDebugHelpers.h"

ARootPoint::ARootPoint()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ARootPoint::BeginPlay()
{
    Super::BeginPlay();
}

void ARootPoint::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

/** エディタで値が変わるたび／スポーン時に呼ばれる */
void ARootPoint::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITORONLY_DATA
    // エディタのプレビュー世界のみ描画（PIEやゲームでは描かない）
    if (bDrawDebugInEditor && GetWorld() && !GetWorld()->IsGameWorld())
    {
        const FTransform& Xf = GetActorTransform();
        for (int32 i = 0; i < RoamingPointsLocal.Num(); ++i)
        {
            const FVector W = Xf.TransformPosition(RoamingPointsLocal[i]);
            DrawDebugSphere(GetWorld(), W, DebugSphereRadius, 8, FColor::Cyan, false, 0.f);
            DrawDebugLine(GetWorld(), GetActorLocation(), W, FColor::Cyan, false, 0.f, 0, 1.5f);
            DrawDebugString(GetWorld(), W + FVector(0, 0, DebugSphereRadius + 6.f), FString::FromInt(i), nullptr, FColor::White, 0.f, true);
        }
    }
#endif
}

/** ---------- 取得系 ---------- */

FVector ARootPoint::GetRoamingPointLocal(int32 Index) const
{
    return RoamingPointsLocal.IsValidIndex(Index) ? RoamingPointsLocal[Index] : FVector::ZeroVector;
}

FVector ARootPoint::GetRoamingPointWorld(int32 Index) const
{
    return RoamingPointsLocal.IsValidIndex(Index)
        ? GetActorTransform().TransformPosition(RoamingPointsLocal[Index])
        : GetActorLocation();
}

FVector ARootPoint::GetRandomRoamingPointWorld() const
{
    const int32 Num = RoamingPointsLocal.Num();
    if (Num <= 0) return GetActorLocation();
    const int32 Idx = FMath::RandRange(0, Num - 1);
    return GetActorTransform().TransformPosition(RoamingPointsLocal[Idx]);
}

FVector ARootPoint::GetNearestRoamingPointWorld(const FVector& FromLocation) const
{
    const int32 Num = RoamingPointsLocal.Num();
    if (Num <= 0) return GetActorLocation();

    int32 BestIdx = 0;
    float BestDist2 = TNumericLimits<float>::Max();

    for (int32 i = 0; i < Num; ++i)
    {
        const FVector W = GetActorTransform().TransformPosition(RoamingPointsLocal[i]);
        const float D2 = FVector::DistSquared(FromLocation, W);
        if (D2 < BestDist2)
        {
            BestDist2 = D2;
            BestIdx = i;
        }
    }
    return GetActorTransform().TransformPosition(RoamingPointsLocal[BestIdx]);
}