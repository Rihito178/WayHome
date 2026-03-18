// AIEnemy.cpp
#include "AIEnemy.h"

// ★ Perception の実体は .cpp でinclude
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"

AAIEnemy::AAIEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    GetCharacterMovement()->bUseControllerDesiredRotation = true;
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->MaxWalkSpeed = ChaseWalkSpeed;

    // Perception の生成
    PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));

    // 視覚パラメータ
    SightConfig->SightRadius = 2000.f;
    SightConfig->LoseSightRadius = 2200.f;
    SightConfig->PeripheralVisionAngleDegrees = 60.f;
    SightConfig->SetMaxAge(3.f);

    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

    PerceptionComp->ConfigureSense(*SightConfig);
    PerceptionComp->SetDominantSense(SightConfig->GetSenseImplementation());
}

void AAIEnemy::BeginPlay()
{
    Super::BeginPlay();

    if (PerceptionComp)
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
    float BestDist = TNumericLimits<float>::Max();

    for (AActor* Actor : UpdatedActors)
    {
        if (!IsValid(Actor)) continue;
        const float D = FVector::Dist(Actor->GetActorLocation(), GetActorLocation());
        if (D < BestDist) { BestDist = D; Best = Actor; }
    }

    if (Best) { CurrentTarget = Best; MoveToTarget(); }
    else { ClearTarget(); }
}

void AAIEnemy::MoveToTarget()
{
    if (AAIController* AI = Cast<AAIController>(GetController()))
    {
        GetCharacterMovement()->MaxWalkSpeed = ChaseWalkSpeed;
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