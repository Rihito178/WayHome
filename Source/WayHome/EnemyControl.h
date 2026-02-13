// EnemyControl.h
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyControl.generated.h"

UCLASS()
class WAYHOME_API AEnemyControl : public AAIController
{
    GENERATED_BODY()

public:
    AEnemyControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
    virtual void OnPossess(APawn* InPawn) override;
    virtual void OnUnPossess() override;
};