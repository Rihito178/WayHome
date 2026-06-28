#include "MyCSVInstance.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

TArray<FString> UMyCSVInstance::GetDialogue(const FString& FilePath)
{
    TArray<FString> Result;

    //パスが空なら終了
    if (FilePath.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("FilePath is EMPTY"));
        return Result;
    }

    //相対パスを絶対パスに変換
    FString FixedPath = FPaths::ConvertRelativePathToFull(FilePath);

    UE_LOG(LogTemp, Warning, TEXT("Loading CSV: %s"), *FixedPath);

    FString FileContent;

    if (FFileHelper::LoadFileToString(FileContent, *FixedPath))
    {
        UE_LOG(LogTemp, Warning, TEXT("CSV LOAD SUCCESS"));

        TArray<FString> Lines;
        FileContent.ParseIntoArrayLines(Lines);

        for (int i = 1; i < Lines.Num(); i++) // ヘッダスキップ
        {
            TArray<FString> Columns;
            Lines[i].ParseIntoArray(Columns, TEXT(","), true);

            if (Columns.Num() >= 2 && !Columns[1].IsEmpty())
            {
                Result.Add(Columns[1]); //セリフ列
            }
        }

        UE_LOG(LogTemp, Warning, TEXT("Rows Loaded: %d"), Result.Num());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("CSV LOAD FAILED: %s"), *FixedPath);
    }

    return Result;
}