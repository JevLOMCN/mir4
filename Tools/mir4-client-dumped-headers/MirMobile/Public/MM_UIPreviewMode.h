#pragma once
#include "CoreMinimal.h"
#include "MM_PreviewModeBase.h"
#include "MM_UIPreviewMode.generated.h"

class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class AMM_UIPreviewMode : public AMM_PreviewModeBase {
    GENERATED_BODY()
public:
    AMM_UIPreviewMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetPathString(TArray<FString>& arFile, TArray<FString>& arFolder, const FString& strFindPath);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateMyWidget(const FString& strFullPath);
    
};

