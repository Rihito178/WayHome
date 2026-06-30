#include "EnemyControl.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

AEnemyControl::AEnemyControl(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}

void AEnemyControl::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    // BB/BT ‚ð‰Šú‰»
    if (BehaviorTreeAsset && BehaviorTreeAsset->BlackboardAsset)
    {
        if (UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackboardComp))
        {
            RunBehaviorTree(BehaviorTreeAsset);
            UE_LOG(LogTemp, Warning, TEXT("[AEnemyControl] OnPossess Pawn=%s  BT=%s  BB=%s"),
                *GetNameSafe(InPawn), *GetNameSafe(BehaviorTreeAsset),
                BehaviorTreeAsset && BehaviorTreeAsset->BlackboardAsset ? *GetNameSafe(BehaviorTreeAsset->BlackboardAsset) : TEXT("NULL"));
        }
    }
}

void AEnemyControl::OnUnPossess()
{
  

    Super::OnUnPossess();
    if (BehaviorComp)
    {
        BehaviorComp->StopTree(EBTStopMode::Safe);

    }
}

void AEnemyControl::SetTargetActor(APawn* Target)
{
    if (BlackboardComp)
    {
        BlackboardComp->SetValueAsObject(PlayerKeyName, Target);//BB:Player_Info‚ÉSet
        StopMovement();

        UE_LOG(LogTemp, Warning, TEXT("[BB] Set %s  Key=%s  BB=%s"),
            *GetNameSafe(Target), *PlayerKeyName.ToString(), *GetNameSafe(BlackboardComp));

    }
}

void AEnemyControl::ClearTargetActor()
{
    if (BlackboardComp)
    {
        BlackboardComp->ClearValue(PlayerKeyName);//BB:Player_Info‚ðClear
        StopMovement();

        UE_LOG(LogTemp, Warning, TEXT("[BB] Clear Key=%s  BB=%s"),
            *PlayerKeyName.ToString(), *GetNameSafe(BlackboardComp));

    }
}