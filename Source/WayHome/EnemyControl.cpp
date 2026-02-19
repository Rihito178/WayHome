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

    // BT/BB のロード
    UBlackboardData* BBAsset = BlackboardAsset.IsNull() ? nullptr : BlackboardAsset.LoadSynchronous();
    UBehaviorTree* BTAsset = BehaviorTreeAsset.IsNull() ? nullptr : BehaviorTreeAsset.LoadSynchronous();

    if (BBAsset && BTAsset)
    {
        UBlackboardComponent* BBComp = nullptr;

        // Blackboard 初期化
        UseBlackboard(BBAsset, BBComp);

        // BehaviorTree 起動
        RunBehaviorTree(BTAsset);
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
