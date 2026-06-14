#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/EngineTypes.h" // ✅ FFilePath用
#include "MyCSVInstance.generated.h"

UCLASS()
class WAYHOME_API UMyCSVInstance : public UGameInstance
{
    GENERATED_BODY()

public:

    virtual void Init() override;

    // ✅ ダイアログCSVパス（BPから設定）
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
    FFilePath DialogueCsvPath;

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDialogue();

private:

    TArray<TArray<FString>> CSVData;

    void LoadCSV();
};