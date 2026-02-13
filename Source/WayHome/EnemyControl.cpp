// EnemyControl.cpp

#include "EnemyControl.h"
#include "GameFramework/Pawn.h"

AEnemyControl::AEnemyControl(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // 必要になればここで Perception 等を追加
}

void AEnemyControl::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
    // 必要になれば BT/BB 起動をここで
}

void AEnemyControl::OnUnPossess()
{
    Super::OnUnPossess();
    // 必要になれば BT 停止をここで
}