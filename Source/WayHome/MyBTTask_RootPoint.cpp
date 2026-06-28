// MyBTTask_RootPoint.cpp
#include "MyBTTask_RootPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "RootPoint.h"

UMyBTTask_RootPoint::UMyBTTask_RootPoint()
{
    NodeName = TEXT("Find Roaming Point (Index→Location)");
    BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UMyBTTask_RootPoint, BlackboardKey));
}

ARootPoint* UMyBTTask_RootPoint::FindRootPoint(UWorld* World) const
{
    TArray<AActor*> Found;
    UGameplayStatics::GetAllActorsOfClass(World, ARootPoint::StaticClass(), Found);
    return (Found.Num() > 0) ? Cast<ARootPoint>(Found[0]) : nullptr;
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

    // RootPoint を1回だけ見つけてキャッシュ
    if (!CachedRootPoint.IsValid())
    {
        CachedRootPoint = FindRootPoint(World);
        if (!CachedRootPoint.IsValid()) return EBTNodeResult::Failed;
    }
    ARootPoint* RP = CachedRootPoint.Get();
    if (!IsValid(RP) || RP->PointNum() <= 0) return EBTNodeResult::Failed;

    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    if (!BB) return EBTNodeResult::Failed;

    //Indexを取得し安全化
    int32 Index = BB->GetValueAsInt(PointIndexKey.SelectedKeyName);
    Index = (RP->PointNum() > 0) ? (Index % RP->PointNum()) : 0;
    UE_LOG(LogTemp, Warning, TEXT("[Find] Index=%d / Num=%d"), Index, RP->PointNum());
    //ワールド座標を取得
    const FVector Raw = RP->GetRoamingPointWorld(Index);

    //NavMeshへ投影
    FVector NavLoc;
    FVector Extent = ProjectSearchExtent;
    bool bOk = ProjectToNav(World, Raw, NavLoc, Extent);
    for (int32 i = 0; !bOk && i < RetryCountIfProjectionFails; ++i)
    {
        Extent *= RetryExtentScale;
        bOk = ProjectToNav(World, Raw, NavLoc, Extent);
    }
    if (!bOk) return EBTNodeResult::Failed;

    BB->SetValueAsVector(BlackboardKey.SelectedKeyName, NavLoc);
    return EBTNodeResult::Succeeded;
}
