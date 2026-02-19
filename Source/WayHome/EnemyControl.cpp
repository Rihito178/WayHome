// EnemyControl.cpp
#include "EnemyControl.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

AEnemyControl::AEnemyControl(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // ---- AIPerception（視覚） ----
    Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
    SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));

    // 視野設定（必要に応じて調整）
    SightConfig->SightRadius = 2000.f;
    SightConfig->LoseSightRadius = 2400.f;
    SightConfig->PeripheralVisionAngleDegrees = 90.f;
    SightConfig->SetMaxAge(1.5f);

    Perception->ConfigureSense(*SightConfig);

    // コールバック登録
    Perception->OnTargetPerceptionUpdated.AddDynamic(this, &ThisClass::OnTargetPerceptionUpdated);
}


void AEnemyControl::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    UE_LOG(LogTemp, Warning, TEXT("[AI] OnPossess: %s"), *GetNameSafe(InPawn));

    UBlackboardData* BBAsset = BlackboardAsset.IsNull() ? nullptr : BlackboardAsset.LoadSynchronous();
    UBehaviorTree* BTAsset = BehaviorTreeAsset.IsNull() ? nullptr : BehaviorTreeAsset.LoadSynchronous();
    UE_LOG(LogTemp, Warning, TEXT("[AI] Assets: BB=%s  BT=%s"),
        *GetNameSafe(BBAsset), *GetNameSafe(BTAsset));

    if (BBAsset && BTAsset)
    {
        UBlackboardComponent* BBComp = nullptr;
        const bool bBBInit = UseBlackboard(BBAsset, BBComp);
        UE_LOG(LogTemp, Warning, TEXT("[AI] UseBlackboard=%s  BBComp=%s"),
            bBBInit ? TEXT("true") : TEXT("false"),
            *GetNameSafe(BBComp));

        const bool bBTStarted = RunBehaviorTree(BTAsset);
        UE_LOG(LogTemp, Warning, TEXT("[AI] RunBehaviorTree=%s"),
            bBTStarted ? TEXT("true") : TEXT("false"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("[AI] BT/BB asset missing."));
    }
}


void AEnemyControl::OnUnPossess()
{
    Super::OnUnPossess();

    if (BrainComponent)
    {
        BrainComponent->StopLogic(TEXT("UnPossess"));
    }
}

void AEnemyControl::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    if (UBlackboardComponent* BB = GetBlackboardComponent())
    {
        // 視認時
        if (Stimulus.WasSuccessfullySensed())
        {
            BB->SetValueAsObject(BBKey_Target, Actor);
        }
        else
        {
            // ロスト時
            BB->ClearValue(BBKey_Target);
        }
    }
}
