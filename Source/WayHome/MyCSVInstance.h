// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyCSVInstance.generated.h"

UCLASS()
class WAYHOME_API UMyCSVInstance : public UGameInstance
{
    GENERATED_BODY()

public:

    virtual void Init() override;

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDialogue(const FString& NPC_ID);

private:

    TArray<TArray<FString>> CSVData;

    void LoadCSV();
};