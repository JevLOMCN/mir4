#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OnRequestContentFailedDelegate.h"
#include "OnRequestContentSucceededDelegate.h"
#include "MobilePatchingLibrary.generated.h"

class UMobileInstalledContent;

UCLASS(Blueprintable)
class MOBILEPATCHINGUTILS_API UMobilePatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMobilePatchingLibrary();

    UFUNCTION(BlueprintCallable)
    static void RequestContent(const FString& RemoteManifestURL, const FString& CloudURL, const FString& InstallDirectory, FOnRequestContentSucceeded OnSucceeded, FOnRequestContentFailed OnFailed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActiveWiFiConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetSupportedPlatformNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMobileInstalledContent* GetInstalledContent(const FString& InstallDirectory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActiveDeviceProfileName();
    
};

