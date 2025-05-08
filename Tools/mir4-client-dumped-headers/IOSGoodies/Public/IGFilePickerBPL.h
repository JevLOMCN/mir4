#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FilePickerCanceledDelegateDelegate.h"
#include "FilePickerSuccessDelegateDelegate.h"
#include "IGFilePickerBPL.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGFilePickerBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGFilePickerBPL();

    UFUNCTION(BlueprintCallable)
    static void OpenFiles(const TArray<FString> FileTypes, bool allowMultiple, const FFilePickerSuccessDelegate& OnSuccess, const FFilePickerCanceledDelegate& OnCancel);
    
    UFUNCTION(BlueprintCallable)
    static void MoveFilesToService(const TArray<FString> FilePaths, const FFilePickerSuccessDelegate& OnSuccess, const FFilePickerCanceledDelegate& OnCancel);
    
    UFUNCTION(BlueprintCallable)
    static void ImportFiles(const TArray<FString> FileTypes, bool allowMultiple, const FFilePickerSuccessDelegate& OnSuccess, const FFilePickerCanceledDelegate& OnCancel);
    
    UFUNCTION(BlueprintCallable)
    static void ExportFilesToService(const TArray<FString> FilePaths, const FFilePickerSuccessDelegate& OnSuccess, const FFilePickerCanceledDelegate& OnCancel);
    
};

