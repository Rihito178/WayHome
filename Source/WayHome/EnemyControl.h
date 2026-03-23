#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyControl.generated.h"

class UBlackboardComponent;
class UBehaviorTreeComponent;
class UBehaviorTree;

/**
 * AEnemyControl
 * - RunBehaviorTree / UseBlackboard を OnPossess で一度だけ起動
 * - Player_Info（BBキー）への書き込み/クリアのみを公開（移動命令は一切しない）
 */
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
    /** 視認しているプレイヤー（APawn）を BB の Player_Info に書き込む／クリアする */
    UFUNCTION(BlueprintCallable, Category = "AI")
    void SetTargetActor(APawn* Target);

    UFUNCTION(BlueprintCallable, Category = "AI")
    void ClearTargetActor();

private:
    UPROPERTY(Transient)
    UBlackboardComponent* BlackboardComp = nullptr;

    UPROPERTY(Transient)
    UBehaviorTreeComponent* BehaviorComp = nullptr;

    /** Controller（BP）の Defaults から割り当てる想定 */
    UPROPERTY(EditDefaultsOnly, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset = nullptr;

    /** ★ Blackboard/BT と完全一致させる（例：Player_Info） */
    UPROPERTY(EditDefaultsOnly, Category = "AI")
    FName PlayerKeyName = TEXT("Player_Info");
};