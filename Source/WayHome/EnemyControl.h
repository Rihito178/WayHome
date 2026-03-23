// EnemyControl.h
#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyControl.generated.h"

class UBlackboardComponent;
class UBehaviorTreeComponent;
class UBehaviorTree;

UCLASS()
class WAYHOME_API AEnemyControl : public AAIController
{
    GENERATED_BODY()
public:
    AEnemyControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
    virtual void OnPossess(APawn* InPawn) override;
    virtual void OnUnPossess() override;

public:
    UFUNCTION(BlueprintCallable, Category = "AI")
    void SetTargetActor(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "AI")
    void ClearTargetActor();

protected:
    UPROPERTY(Transient) UBlackboardComponent* BlackboardComp = nullptr;
    UPROPERTY(Transient) UBehaviorTreeComponent* BehaviorComp = nullptr;

    // ★ BPのController(=BP_EnemyControl)のDefaultsで割り当てる想定
    UPROPERTY(EditDefaultsOnly, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset = nullptr;

    // ★ BBキー名はBBアセットと一致させる（例："Player"）
    UPROPERTY(EditDefaultsOnly, Category = "AI")
    FName PlayerKeyName = TEXT("Player");
};