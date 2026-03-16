// AIEnemy.cpp
#include "AIEnemy.h"

// ★ Perception の実体は .cpp で include
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "RootPoint.h" // 関数本体で型を使うため .cpp で include

// （任意：AIControllerに SetPlayerKey がある場合のみ有効化）
// #include "AIC_Enemy.h"

AAIEnemy::AAIEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    // CharacterMovement の安全化（nullptr 防止）
    if (UCharacterMovementComponent* Move = GetCharacterMovement())
    {
        Move->bUseControllerDesiredRotation = true;
        Move->bOrientRotationToMovement = true;
        Move->MaxWalkSpeed = ChaseWalkSpeed;
    }

    // Perception の生成
    PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));

    // 視覚パラメータ
    if (SightConfig)
    {
        SightConfig->SightRadius = 2000.f;
        SightConfig->LoseSightRadius = 2200.f;
        SightConfig->PeripheralVisionAngleDegrees = 60.f;
        SightConfig->SetMaxAge(3.f);

        SightConfig->DetectionByAffiliation.bDetectEnemies = true;
        SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
        SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
    }

    if (PerceptionComp && SightConfig)
    {
        PerceptionComp->ConfigureSense(*SightConfig);
        PerceptionComp->SetDominantSense(SightConfig->GetSenseImplementation());
    }
}

void AAIEnemy::SetPlayerKey(APawn* player)
{
    ensure(BlackboardComp);

    // ブラックボードで作成したPlayerというキーにプレイヤー情報を入れる
    BlackboardComp->SetValueAsObject(PlayerKeyName, player);
}

ACharacter* AAIEnemy::GetPlayerKey()
{
    ensure(BlackboardComp);

    return Cast<ACharacter>(BlackboardComp->GetValueAsObject(PlayerKeyName));
}

void AAIEnemy::BeginPlay()
{
    Super::BeginPlay();

    // デリゲートの重複登録防止
    if (PerceptionComp && !PerceptionComp->OnPerceptionUpdated.IsAlreadyBound(this, &AAIEnemy::OnPerceptionUpdated))
    {
        PerceptionComp->OnPerceptionUpdated.AddDynamic(this, &AAIEnemy::OnPerceptionUpdated);
    }
}

void AAIEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CurrentTarget)
    {
        const float Dist = FVector::Dist(CurrentTarget->GetActorLocation(), GetActorLocation());
        if (Dist <= EngageDistance)
        {
            MoveToTarget();
        }
    }
}

void AAIEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAIEnemy::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
    AActor* Best = nullptr;
    float   BestDist = TNumericLimits<float>::Max();

    for (AActor* Actor : UpdatedActors)
    {
        if (!IsValid(Actor)) continue;

        const float D = FVector::Dist(Actor->GetActorLocation(), GetActorLocation());
        if (D < BestDist)
        {
            BestDist = D;
            Best = Actor;
        }
    }

    if (Best)
    {
        CurrentTarget = Best;

        // （任意）AIController の BB に Target を入れたい場合は有効化
         if (AAIEnemy* MyAI = Cast<AAIEnemy>(GetController()))
         {
             MyAI->SetPlayerKey(Cast<APawn>(Best)); // 引数型は SetPlayerKey の宣言に合わせる
         }

        MoveToTarget();
    }
    else
    {
        ClearTarget();
    }
}

void AAIEnemy::MoveToTarget()
{
    if (!CurrentTarget) return;

    if (AAIController* AI = Cast<AAIController>(GetController()))
    {
        if (UCharacterMovementComponent* Move = GetCharacterMovement())
        {
            Move->MaxWalkSpeed = ChaseWalkSpeed;
        }
        AI->MoveToActor(CurrentTarget, /*AcceptanceRadius=*/100.f, /*bStopOnOverlap=*/true);
    }
}

void AAIEnemy::ClearTarget()
{
    CurrentTarget = nullptr;

    if (AAIController* AI = Cast<AAIController>(GetController()))
    {
        AI->StopMovement();
    }
}
