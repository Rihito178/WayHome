// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_RootPointIndex.generated.h"

/**
 * 巡回ポイントのインデックス（Blackboard の Int キー）を更新する BT タスク。
 * ・bDirectional=false: 0→1→…→N-1→0 と循環
 * ・bDirectional=true : 端点で反転（0⇄…⇄N-1）する往復
 *
 * このタスクが操作する Blackboard のキーは「BlackboardKey」（BTTask_BlackboardBase提供）で指定します。
 */
UCLASS()
class WAYHOME_API UMyBTTask_RootPointIndex : public UBTTask_BlackboardBase
{
    GENERATED_BODY()

public:
    /** コンストラクタ */
    explicit UMyBTTask_RootPointIndex(const FObjectInitializer& ObjectInitializer);

    /** タスク実行（MoveTo 完了直後などに呼ぶ想定） */
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
    /** 端点で反転する往復モード（true で往復 / false で常に前進循環） */
    UPROPERTY(EditAnywhere, Category = "AI")
    bool bDirectional = true;

private:
    /** 進行方向（Forward:昇順 / Reverse:降順） */
    enum class EDirectionType { Forward, Reverse };

    /** 初期方向は順方向 */
    EDirectionType Direction = EDirectionType::Forward;
};