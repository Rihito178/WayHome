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

        for (int i = 1; i < Lines.Num(); i++) // ヘッダ行スキップ
        {
            TArray<FString> Columns;
            Lines[i].ParseIntoArray(Columns, TEXT(","), true);

            if (Columns.Num() >= 2) // ✅ 2列対応
            {
                CSVData.Add(Columns);
            }
        }
    }
}

TArray<FString> UMyCSVInstance::GetDialogue()
{
    TArray<FString> Result;

    for (const TArray<FString>& Row : CSVData)
    {
        if (Row.Num() >= 2)
        {
            Result.Add(Row[1]); // ✅ Text列だけ取得
        }
    }

    return Result;
}
