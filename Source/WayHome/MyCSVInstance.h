#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyCSVInstance.generated.h"

UCLASS()
class WAYHOME_API UMyCSVInstance : public UGameInstance
{
    GENERATED_BODY()

public:

    //CSVパスを引数で受け取る
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDialogue(const FString& FilePath);
};