// BTService_SetSpeed.cpp
#include "BTService_SetSpeed.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTService_SetSpeed::UBTService_SetSpeed()
{
    bNotifyTick = true;
    NodeName = TEXT("Set Speed (Walk/Run by Target)");
}

void UBTService_SetSpeed::TickNode(UBehaviorTreeComponent& OwnerComp, uint8*, float)
{
    AAIController* AI = OwnerComp.GetAIOwner();
    ACharacter* Chr = AI ? Cast<ACharacter>(AI->GetPawn()) : nullptr;
    if (!Chr) return;

    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    const bool bHasTarget = BB && (BB->GetValueAsObject(TargetKey.SelectedKeyName) != nullptr);

    if (UCharacterMovementComponent* Move = Chr->GetCharacterMovement())
    {
        Move->MaxWalkSpeed = bHasTarget ? RunSpeed : WalkSpeed;
    }
}
