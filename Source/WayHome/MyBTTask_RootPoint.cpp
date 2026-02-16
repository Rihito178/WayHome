// MyBTTask_RootPoint.cpp
#include "MyBTTask_RootPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "EngineUtils.h"

// CSV ビルド役
#include "MyActor.h"  // AMyActor に const TArray<FVector>& GetFloorWorldPoints() const を実装済みの前提

UMyBTTask_RootPoint::UMyBTTask_RootPoint()
{
    NodeName = TEXT("Find Roaming Point From Floor(=2)");
    // このタスクは Blackboard の Vector キーに書く想定
    BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UMyBTTask_RootPoint, BlackboardKey));
}

AMyActor* UMyBTTask_RootPoint::FindCsvBuilder(UWorld* World) const
{
    for (TActorIterator<AMyActor> It(World); It; ++It)
    {
        return *It; // 最初の1体を返す
    }
    return nullptr;
}

bool UMyBTTask_RootPoint::ProjectToNav(UWorld* World, const FVector& In, FVector& Out, const FVector& Extent) const
{
    if (UNavigationSystemV1* Nav = UNavigationSystemV1::GetCurrent(World))
    {
        FNavLocation Loc;
        if (Nav->ProjectPointToNavigation(In, Loc, Extent))
        {
            Out = Loc.Location;
            return true;
        }
    }
    return false;
}

EBTNodeResult::Type UMyBTTask_RootPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    UWorld* World = OwnerComp.GetWorld();
    if (!World) return EBTNodeResult::Failed;

    // AMyActor をキャッシュ
    if (!CsvBuilder.IsValid())
    {
        CsvBuilder = FindCsvBuilder(World);
        if (!CsvBuilder.IsValid()) return EBTNodeResult::Failed;
    }

    // Floor=2 の座標群を取得
    const TArray<FVector>& Floors = CsvBuilder->GetFloorWorldPoints();
    if (Floors.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("[BTTask_RootPoint] No Floor points."));
        return EBTNodeResult::Failed;
    }

    // ランダム抽選
    const int32 Index = FMath::RandRange(0, Floors.Num() - 1);
    const FVector Raw = Floors[Index];

    // NavMesh へ投影（失敗時は範囲を広げて再試行）
    FVector NavLoc;
    FVector Extent = ProjectSearchExtent;
    bool bOk = ProjectToNav(World, Raw, NavLoc, Extent);

    for (int32 i = 0; !bOk && i < RetryCountIfProjectionFails; ++i)
    {
        Extent *= RetryExtentScale;
        bOk = ProjectToNav(World, Raw, NavLoc, Extent);
    }

    if (!bOk)
    {
        UE_LOG(LogTemp, Warning, TEXT("[BTTask_RootPoint] ProjectPointToNavigation failed."));
        return EBTNodeResult::Failed;
    }

    // Blackboard に書き込み
    if (UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent())
    {
        BB->SetValueAsVector(BlackboardKey.SelectedKeyName, NavLoc);
        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}