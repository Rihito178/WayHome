// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBTTask_RootPointIndex.h"
#include "BehaviorTree/BlackboardComponent.h"   // UBlackboardComponent


#include "EnemyControl.h"                      // AEnemyControl（AIController 実体）
#include "AIEnemy.h"                           // AAIEnemy（敵キャラ実体）
#include "RootPoint.h"                    // ★ RootPoint の実体ヘッダ（PointNum() を呼ぶため）


UMyBTTask_RootPointIndex::UMyBTTask_RootPointIndex(const FObjectInitializer& ObjectInitializer)
    : UBTTask_BlackboardBase{ ObjectInitializer }
{
    // BehaviorTreeのタスク欄に表示する名前
    NodeName = TEXT("Roaming Point Index");
}

EBTNodeResult::Type UMyBTTask_RootPointIndex::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    // AEnemyControl に合わせてキャスト（クラス名は実際の定義に合わせてください）
    if (AEnemyControl* AIC = Cast<AEnemyControl>(OwnerComp.GetAIOwner()))
    {
        // AAIEnemy に合わせてキャスト（クラス名は実際の定義に合わせてください）
        if (AAIEnemy* Enemy = Cast<AAIEnemy>(AIC->GetPawn()))
        {
            if (UBlackboardComponent* const BB_Component = OwnerComp.GetBlackboardComponent())
            {
                // RootPoint 参照が無ければ失敗
                const auto* RootPointActor = Enemy->GetRootPointActor();  // ← HTMLエンティティを修正
                if (!RootPointActor)
                {
                    return EBTNodeResult::Failed;
                }

                // 徘徊要素の全ての数を取得
                const int32 AllPoints = RootPointActor->PointNum();

                // 点が無ければ失敗
                if (AllPoints <= 0)
                {
                    return EBTNodeResult::Failed;
                }

                // 点が1つなら必ず 0
                if (AllPoints == 1)
                {
                    BB_Component->SetValueAsInt(GetSelectedBlackboardKey(), 0);
                    FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
                    return EBTNodeResult::Succeeded;
                }

                // 現在 Index を取得（範囲補正）
                int32 Index = BB_Component->GetValueAsInt(GetSelectedBlackboardKey());
                Index = FMath::Clamp(Index, 0, AllPoints - 1);

                const int32 MinIndex = 0;
                const int32 MaxIndex = AllPoints - 1;

                // 往復モード（bDirectional = true）
                if (bDirectional)
                {
                    if (Index >= MaxIndex && Direction == EDirectionType::Forward)
                    {
                        Direction = EDirectionType::Reverse;
                    }
                    else if (Index <= MinIndex && Direction == EDirectionType::Reverse)
                    {
                        Direction = EDirectionType::Forward;
                    }

                    int32 NextIndex = (Direction == EDirectionType::Forward) ? (Index + 1) : (Index - 1);
                    NextIndex = FMath::Clamp(NextIndex, 0, MaxIndex);

                    BB_Component->SetValueAsInt(GetSelectedBlackboardKey(), NextIndex);
                }
                else
                {
                    // ループ: 0 → 1 → … → N-1 → 0
                    const int32 NextIndex = (Index + 1) % AllPoints;
                    BB_Component->SetValueAsInt(GetSelectedBlackboardKey(), NextIndex);
                }

                FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
                return EBTNodeResult::Succeeded;
            }
        }
    }

    return EBTNodeResult::Failed;
}