// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCSVInstance.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

void UMyCSVInstance::Init()
{
    Super::Init();
    LoadCSV();
}

void UMyCSVInstance::LoadCSV()
{
    FString FilePath = FPaths::ProjectContentDir() + TEXT("Data/Dialogue.csv");

    FString FileContent;

    if (FFileHelper::LoadFileToString(FileContent, *FilePath))
    {
        TArray<FString> Lines;
        FileContent.ParseIntoArrayLines(Lines);

        for (int i = 1; i < Lines.Num(); i++) // ヘッダスキップ
        {
            TArray<FString> Columns;
            Lines[i].ParseIntoArray(Columns, TEXT(","), true);

            if (Columns.Num() >= 3)
            {
                CSVData.Add(Columns);
            }
        }
    }
}

TArray<FString> UMyCSVInstance::GetDialogue(const FString& NPC_ID)
{
    TArray<FString> Result;

    for (const TArray<FString>& Row : CSVData)
    {
        if (Row.Num() >= 3)
        {
            if (Row[0].Equals(NPC_ID))
            {
                Result.Add(Row[2]); // セリフ列
            }
        }
    }

    return Result;
}
