#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SteamProfile.h"
#include "OnlineSubsystemExtendedSteamBlueprintLibrary.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDSTEAM_API UOnlineSubsystemExtendedSteamBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineSubsystemExtendedSteamBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResetActiveWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUsername();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamProfile GetCachedSteamUserInfo(const FString& UserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllCachedSteamUsersInfo(TArray<FSteamProfile>& Users);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccessToken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIfPlayerLoggedIn();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeActiveWidget(UCanvasPanel* ActiveWidget);
    
};

