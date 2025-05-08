#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AppleProfile.h"
#include "OnlineSubsystemExtendedAppleBlueprintLibrary.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDAPPLE_API UOnlineSubsystemExtendedAppleBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineSubsystemExtendedAppleBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResetActiveWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUsername();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAppleProfile GetCachedAppleUserInfo(const FString& UserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllCachedAppleUsersInfo(TArray<FAppleProfile>& Users);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccessToken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIfPlayerLoggedIn();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeActiveWidget(UCanvasPanel* ActiveWidget);
    
};

