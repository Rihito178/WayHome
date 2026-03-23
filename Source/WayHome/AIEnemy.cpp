#include "AIEnemy.h"

// Perception
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"

// Controller（BBへ通知）
#include "EnemyControl.h"

#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"

AAIEnemy::AAIEnemy()
{
    PrimaryActorTick.bCanEverTick = false; // ★ C++ Tick は不要（BTに統一）

    // 見た目の向き・速度（任意）
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
    SightConfig->SetMaxAge(5.f);

    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

    PerceptionComp->ConfigureSense(*SightConfig);
    PerceptionComp->SetDominantSense(SightConfig->GetSenseImplementation());
}

void AAIEnemy::BeginPlay()
{
    Super::BeginPlay();

    if (ensure(PerceptionComp))
    {
        PerceptionComp->OnPerceptionUpdated.AddDynamic(this, &AAIEnemy::OnPerceptionUpdated);
    }
}

void AAIEnemy::OnPerceptionUpdated(const TArray<AActor*>& /*UpdatedActors*/)
{
    if (!PerceptionComp) return;

    // 現在 視認中（Sight）から最短ターゲットを選ぶ
    TArray<AActor*> Seen;
    PerceptionComp->GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), Seen);

    AActor* BestNow = nullptr;
    float   BestD2 = TNumericLimits<float>::Max();

    for (AActor* A : Seen)
    {
        if (!IsValid(A)) continue;
        const float D2 = FVector::DistSquared(A->GetActorLocation(), GetActorLocation());
        if (D2 < BestD2) { BestD2 = D2; BestNow = A; }
    }

    // Controller へ通知（BB: Player_Info の Set/Clear）
    if (AEnemyControl* C = Cast<AEnemyControl>(GetController()))
    {
        if (APawn* P = Cast<APawn>(BestNow)) { C->SetTargetActor(P); }
        else { C->ClearTargetActor(); }
    }
}