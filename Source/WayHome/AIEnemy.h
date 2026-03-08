// AIEnemy.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIEnemy.generated.h"

// ★ UE5ではUObject派生型は前方宣言でOK（UPROPERTYはポインタ）
//    実体のヘッダは .cpp でincludeします。
class UAIPerceptionComponent;
class UAISenseConfig_Sight;
class ARootPoint; // ← 前方宣言でOK（ヘッダ依存を避ける）



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



    /** 巡回ルート用 RootPoint（レベル上で割り当て。スポーン後に近傍検索で設定でも可） */
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI|Roaming")
    ARootPoint* RootPointActor = nullptr;

    /** タスクから参照する Getter（const 安全） */
    UFUNCTION(BlueprintPure, Category = "AI|Roaming")
    const ARootPoint* GetRootPointActor() const { return RootPointActor; }


private:
    UFUNCTION()
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

    void MoveToTarget();
    void ClearTarget();
};