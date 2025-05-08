#pragma once
#include "CoreMinimal.h"
#include "MobileInstalledContent.h"
#include "OnContentInstallFailedDelegate.h"
#include "OnContentInstallSucceededDelegate.h"
#include "MobilePendingContent.generated.h"

UCLASS(Blueprintable)
class MOBILEPATCHINGUTILS_API UMobilePendingContent : public UMobileInstalledContent {
    GENERATED_BODY()
public:
    UMobilePendingContent();

    UFUNCTION(BlueprintCallable)
    void StartInstall(FOnContentInstallSucceeded OnSucceeded, FOnContentInstallFailed OnFailed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalDownloadedSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRequiredDiskSpace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstallProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDownloadStatusText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownloadSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownloadSize();
    
};

