#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IGApps.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGApps : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGApps();

    UFUNCTION(BlueprintCallable)
    static void StartFaceTimeVideoCall(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static void StartFaceTimeAudioCall(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static void RequestRating();
    
    UFUNCTION(BlueprintCallable)
    static void OpenYoutubeVideo(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenDialer(const FString& Number);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAppSettings();
    
    UFUNCTION(BlueprintCallable)
    static void OpenAppOnAppStore(const FString& appId);
    
};

