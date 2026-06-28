#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_RootPointIndex.generated.h"

class ARootPoint;

/**
 * Blackboard の Int（Point_Index）を更新する BT タスク。
 * - bDirectional=false : 0 → 1 → … → N-1 → 0 の循環
 * - bDirectional=true  : 端点で反転（0 ⇄ … ⇄ N-1）の往復
 *
 * 設定（BT側）：
 *   BlackboardKey（Int）→ Point_Index
 * 使い方（BT）：
 *   Find（Index→Point_Location）→ MoveTo(Point_Location) → 本タスク → Wait …をループ
 */
UCLASS()
class WAYHOME_API UMyBTTask_RootPointIndex : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    explicit UMyBTTask_RootPointIndex(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    //per‑instanceで方向フラグを持つためのメモリ領域サイズ
    virtual uint16 GetInstanceMemorySize() const override { return sizeof(FMemory); }

protected:
    //true:往復/false:常に前進
    UPROPERTY(EditAnywhere, Category = "AI")
    bool bDirectional = true;

private:
    //個体ごとに方向を保持する
    struct FMemory
    {
        bool bForward = true;//初期は前進
    };


    static ARootPoint* FindRootPoint(UWorld* World);
};
