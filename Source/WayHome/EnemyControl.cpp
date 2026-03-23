// EnemyControl.cpp
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

    if (BehaviorTreeAsset && BehaviorTreeAsset->BlackboardAsset)
    {
        if (UseBlackboard(BehaviorTreeAsset->BlackboardAsset, BlackboardComp))
        {
            RunBehaviorTree(BehaviorTreeAsset); // BT‹N“®
        }
    }
}

void AEnemyControl::OnUnPossess()
{
    Super::OnUnPossess();
    if (BehaviorComp) { BehaviorComp->StopTree(EBTStopMode::Safe); }
}

void AEnemyControl::SetTargetActor(AActor* Target)
{
    if (BlackboardComp) { BlackboardComp->SetValueAsObject(PlayerKeyName, Target); }
}

void AEnemyControl::ClearTargetActor()
{
    if (BlackboardComp) { BlackboardComp->ClearValue(PlayerKeyName); }
}
