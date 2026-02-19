// EnemyControl.h
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "EnemyControl.generated.h"

UCLASS()
class WAYHOME_API AEnemyControl : public AAIController
{
    GENERATED_BODY()

public:
    AEnemyControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
    virtual void OnPossess(APawn* InPawn) override;
    virtual void OnUnPossess() override;

    /** 視覚 Perception コンポーネント */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    UAIPerceptionComponent* Perception = nullptr;

    /** 視覚設定 */
    UPROPERTY()
    UAISenseConfig_Sight* SightConfig = nullptr;

    /** 視認/ロスト時に呼ばれる */
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    /** 使用する BehaviorTree（エディタで割り当て） */
    UPROPERTY(EditDefaultsOnly, Category = "AI|BT")
    TSoftObjectPtr<UBehaviorTree> BehaviorTreeAsset;

    /** 使用する Blackboard（エディタで割り当て） */
    UPROPERTY(EditDefaultsOnly, Category = "AI|BT")
    TSoftObjectPtr<UBlackboardData> BlackboardAsset;

    /** Target の BB キー名（BB と一致させる） */
    UPROPERTY(EditDefaultsOnly, Category = "AI|BB")
    FName BBKey_Target = TEXT("Target");
};
