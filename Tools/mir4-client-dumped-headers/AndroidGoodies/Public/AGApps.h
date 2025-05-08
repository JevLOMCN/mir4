#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OnApkErrorDelegateDelegate.h"
#include "AGApps.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGApps : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGApps();

    UFUNCTION(BlueprintCallable)
    static void UninstallPackage(const FString& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static void OpenYoutubeVideo(const FString& videoId);
    
    UFUNCTION(BlueprintCallable)
    static void OpenTwitterProfile(const FString& profileId);
    
    UFUNCTION(BlueprintCallable)
    static void OpenInstagramProfile(const FString& profileId);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFacebookProfile(const FString& profileId);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAnotherApplication(const FString& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static void InstallApkFromFile(const FString& FilePath, const FOnApkErrorDelegate& OnError);
    
    UFUNCTION(BlueprintCallable)
    static bool HasPhoneApp();
    
    UFUNCTION(BlueprintCallable)
    static void DownloadAndInstallApk(const FString& DownloadUrl, const FString& DownloadTitle, const FString& DownloadDescription, const FOnApkErrorDelegate& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void DialPhoneNumber(const FString& Number);
    
    UFUNCTION(BlueprintCallable)
    static void CallPhoneNumber(const FString& Number);
    
};

