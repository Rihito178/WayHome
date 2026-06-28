#include "MyBTTask_RootPointIndex.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RootPoint.h"

UMyBTTask_RootPointIndex::UMyBTTask_RootPointIndex(const FObjectInitializer& ObjectInitializer)
    : UBTTask_BlackboardBase{ ObjectInitializer }
{
    NodeName = TEXT("Roaming Point Index");
    //BlackboardKeyはBT側でPoint_Indexを割り当て
}

ARootPoint* UMyBTTask_RootPointIndex::FindRootPoint(UWorld* World)
{
    TArray<AActor*> Found;
    UGameplayStatics::GetAllActorsOfClass(World, ARootPoint::StaticClass(), Found);
    return (Found.Num() > 0) ? Cast<ARootPoint>(Found[0]) : nullptr;
}

EBTNodeResult::Type UMyBTTask_RootPointIndex::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    UWorld* World = OwnerComp.GetWorld();
    if (!BB || !World) return EBTNodeResult::Failed;

    ARootPoint* RP = FindRootPoint(World);
    if (!IsValid(RP)) return EBTNodeResult::Failed;

    const int32 Num = RP->PointNum();
    if (Num <= 0)
    {
        return EBTNodeResult::Failed;
    }
    if (Num == 1)
    {
        BB->SetValueAsInt(GetSelectedBlackboardKey(), 0);
        return EBTNodeResult::Succeeded;
    }

    int32 Index = BB->GetValueAsInt(GetSelectedBlackboardKey());
    Index = FMath::Clamp(Index, 0, Num - 1);

    if (bDirectional)
    {
        //per‑instanceの方向フラグをNodeMemoryから取得
        auto* Mem = reinterpret_cast<FMemory*>(NodeMemory);
        const int32 MinIndex = 0;
        const int32 MaxIndex = Num - 1;

        //端で反転
        if (Index >= MaxIndex && Mem->bForward)      Mem->bForward = false;
        else if (Index <= MinIndex && !Mem->bForward) Mem->bForward = true;

        const int32 Next = Mem->bForward ? FMath::Min(Index + 1, MaxIndex)
            : FMath::Max(Index - 1, MinIndex);
        BB->SetValueAsInt(GetSelectedBlackboardKey(), Next);
    }
    else
    {
        BB->SetValueAsInt(GetSelectedBlackboardKey(), (Index + 1) % Num);
    }

    return EBTNodeResult::Succeeded;
}