// MyBTTask_RootPoint.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_RootPoint.generated.h"

class ARootPoint;

/**
 * Blackboard の Int（Point_Index）に従い、ARootPoint の配列からワールド座標を取り出し、
 * NavMesh 上に投影して Blackboard(Vector)（= BlackboardKey）に書き込むタスク。
 * - BlackboardKey   : Vector（例 "Point_Location"）
 * - PointIndexKey   : Int   （例 "Point_Index"）
 * - RootPoint はタスク内で一度だけ探索→キャッシュ（記事形式）
 */
UCLASS()
class WAYHOME_API UMyBTTask_RootPoint : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    UMyBTTask_RootPoint();

protected:
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    /** Index を読むための BB キー（例 "Point_Index"） */
    UPROPERTY(EditAnywhere, Category = "Blackboard")
    FBlackboardKeySelector PointIndexKey;

    /** NavMesh 投影の検索範囲 */
    UPROPERTY(EditAnywhere, Category = "FindPoint")
    FVector ProjectSearchExtent = FVector(300.f, 300.f, 300.f);

    /** 投影失敗時の再試行回数 */
    UPROPERTY(EditAnywhere, Category = "FindPoint")
    int32 RetryCountIfProjectionFails = 1;

    /** 再試行ごとに検索範囲に掛ける倍率 */
    UPROPERTY(EditAnywhere, Category = "FindPoint", meta = (ClampMin = "1.0"))
    float RetryExtentScale = 2.0f;

private:
    TWeakObjectPtr<ARootPoint> CachedRootPoint;

    ARootPoint* FindRootPoint(UWorld* World) const;
    bool ProjectToNav(UWorld* World, const FVector& In, FVector& Out, const FVector& Extent) const;
};