#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

// （必要なら残してOK。重いので本来は .cpp 推奨ですが、今回は構造を変えない方針で維持）
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "AIEnemy.generated.h"

// 前方宣言（UObject派生はポインタでOK）
class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class ARootPoint;

UCLASS()
class WAYHOME_API AAIEnemy : public ACharacter
{
    GENERATED_BODY()

public:
    AAIEnemy();

    // ※本来は AIController 側の責務だが、元の形を維持して宣言を残す
    void SetPlayerKey(APawn* player);

    UFUNCTION()
    ACharacter* GetPlayerKey();

    UPROPERTY()
    UBehaviorTreeComponent* BehaviorComp = nullptr;

    UPROPERTY()
    UBlackboardComponent* BlackboardComp = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = AI)
    FName PlayerKeyName = TEXT("Player");

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    /** 視覚（AI Perception） */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    UAIPerceptionComponent* PerceptionComp = nullptr;

    /** 視覚設定（視野角/距離など） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    UAISenseConfig_Sight* SightConfig = nullptr;

    /** 現在のターゲット */
    UPROPERTY(BlueprintReadOnly, Category = "AI")
    AActor* CurrentTarget = nullptr;

    /** 追跡時の歩行速度 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float ChaseWalkSpeed = 300.f;

    /** 交戦開始距離（MoveTo の目安） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float EngageDistance = 2000.f;

    /** 巡回ルートの RootPoint（任意） */
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI|Roaming")
    ARootPoint* RootPointActor = nullptr;

    UFUNCTION(BlueprintPure, Category = "AI|Roaming")
    const ARootPoint* GetRootPointActor() const { return RootPointActor; }

private:
    // ★ HTMLエスケープ除去 & 正しいシグネチャ
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

    void MoveToTarget();
    void ClearTarget();
};