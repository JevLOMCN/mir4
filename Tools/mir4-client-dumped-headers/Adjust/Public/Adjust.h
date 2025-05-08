#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AdjustAttribution.h"
#include "AdjustConfig.h"
#include "AdjustEvent.h"
#include "Adjust.generated.h"

UCLASS(Blueprintable)
class ADJUST_API UAdjust : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdjust();

    UFUNCTION(BlueprintCallable)
    static void UpdateConversionValue(int32 ConversionValue);
    
    UFUNCTION(BlueprintCallable)
    static void TrackEvent(const FAdjustEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    static void TrackAdRevenue(const FString& Source, const FString& Payload);
    
    UFUNCTION(BlueprintCallable)
    static void SetPushToken(const FString& PushToken);
    
    UFUNCTION(BlueprintCallable)
    static void SetOfflineMode(bool Offline);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SendFirstPackages();
    
    UFUNCTION(BlueprintCallable)
    static void ResetSessionPartnerParameters();
    
    UFUNCTION(BlueprintCallable)
    static void ResetSessionCallbackParameters();
    
    UFUNCTION(BlueprintCallable)
    static void RequestTrackingAuthorizationWithCompletionHandler();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSessionPartnerParameter(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSessionCallbackParameter(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    static void Initialize(const FAdjustConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    static FString GetSdkVersion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetIdfa();
    
    UFUNCTION(BlueprintCallable)
    static void GetGoogleAdId();
    
    UFUNCTION(BlueprintCallable)
    static FAdjustAttribution GetAttribution();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAppTrackingAuthorizationStatus();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAmazonAdId();
    
    UFUNCTION(BlueprintCallable)
    static FString GetAdid();
    
    UFUNCTION(BlueprintCallable)
    static void GdprForgetMe();
    
    UFUNCTION(BlueprintCallable)
    static void DisableThirdPartySharing();
    
    UFUNCTION(BlueprintCallable)
    static void AppWillOpenUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void AddSessionPartnerParameter(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddSessionCallbackParameter(const FString& Key, const FString& Value);
    
};

