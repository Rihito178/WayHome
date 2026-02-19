// BTService_SetSpeed.h
#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SetSpeed.generated.h"

UCLASS()
class WAYHOME_API UBTService_SetSpeed : public UBTService
{
    GENERATED_BODY()
public:
    UBTService_SetSpeed();

    UPROPERTY(EditAnywhere, Category = "Speed") float WalkSpeed = 260.f;
    UPROPERTY(EditAnywhere, Category = "Speed") float RunSpeed = 520.f;
    UPROPERTY(EditAnywhere, Category = "Speed") FBlackboardKeySelector TargetKey;

protected:
    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};