#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIEnemy.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;

/*
AAIEnemy
視認イベントを受け取り、Controller に「見えている/見えていない」を通知するだけ
移動命令/ターゲット保持などのロジック
*/
UCLASS()
class WAYHOME_API AAIEnemy : public ACharacter
{
    GENERATED_BODY()

public:
    AAIEnemy();

protected:
    virtual void BeginPlay() override;

private:
    /** Perception 更新時に Controller へ通知（Set/Clear） */
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

private:
    //NPCが視認した
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
    UAIPerceptionComponent* PerceptionComp = nullptr;

    //NPCが視認できる範囲
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
    UAISenseConfig_Sight* SightConfig = nullptr;

    //移動速度の調整
    UPROPERTY(EditAnywhere, Category = "AI|Movement")
    float ChaseWalkSpeed = 300.f;
};