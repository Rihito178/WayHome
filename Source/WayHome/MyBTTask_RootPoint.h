// MyBTTask_RootPoint.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_RootPoint.generated.h"

// 前方宣言（軽量化）
class AMyActor;

/**
 * Floor=2 のワールド座標配列から 1 点を選び、
 * NavMesh 上の到達可能点に投影して Blackboard(Vector) に書くタスク。
 *
 * - BlackboardKey には Vector を指定してください（例: "PointLocation"）
 * - AMyActor は CSV ビルド役で、GetFloorWorldPoints() を公開している前提
 */
UCLASS()
class WAYHOME_API UMyBTTask_RootPoint : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    UMyBTTask_RootPoint();

protected:
    // タスク本体
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    // エディタから微調整できるパラメータ
    /** NavMesh 投影の検索範囲（XYZ の拡張） */
    UPROPERTY(EditAnywhere, Category = "FindPoint")
    FVector ProjectSearchExtent = FVector(300.f, 300.f, 300.f);

    /** 投影が失敗した場合に範囲を広げて再試行する回数 */
    UPROPERTY(EditAnywhere, Category = "FindPoint")
    int32 RetryCountIfProjectionFails = 1;

    /** 再試行ごとに ProjectSearchExtent に掛ける倍率（1回ごとに広げる） */
    UPROPERTY(EditAnywhere, Category = "FindPoint", meta = (ClampMin = "1.0"))
    float RetryExtentScale = 2.0f;

private:
    // 初回だけ見つけてキャッシュ
    TWeakObjectPtr<AMyActor> CsvBuilder;

    AMyActor* FindCsvBuilder(UWorld* World) const;
    bool ProjectToNav(UWorld* World, const FVector& In, FVector& Out, const FVector& Extent) const;
};
