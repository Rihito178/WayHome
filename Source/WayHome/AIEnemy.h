// AIEnemy.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIEnemy.generated.h"

// ★ UE5ではUObject派生型は前方宣言でOK（UPROPERTYはポインタ）
//    実体のヘッダは .cpp でincludeします。
class UAIPerceptionComponent;
class UAISenseConfig_Sight;

UCLASS()
class WAYHOME_API AAIEnemy : public ACharacter
{
    GENERATED_BODY()

public:
    AAIEnemy();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    /** 視覚（Perception） */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    UAIPerceptionComponent* PerceptionComp = nullptr;

    /** 視覚設定（視野角/距離など） */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    UAISenseConfig_Sight* SightConfig = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "AI")
    AActor* CurrentTarget = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float ChaseWalkSpeed = 300.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float EngageDistance = 2000.f;

private:
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

    void MoveToTarget();
    void ClearTarget();
};