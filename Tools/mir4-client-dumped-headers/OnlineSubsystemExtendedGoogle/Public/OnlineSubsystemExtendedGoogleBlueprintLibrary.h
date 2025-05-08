#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GoogleProfile.h"
#include "OnlineSubsystemExtendedGoogleBlueprintLibrary.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDGOOGLE_API UOnlineSubsystemExtendedGoogleBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineSubsystemExtendedGoogleBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResetActiveWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUsername();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGoogleProfile GetCachedGoogleUserInfo(const FString& UserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllCachedGoogleUsersInfo(TArray<FGoogleProfile>& Users);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccessToken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIfPlayerLoggedIn();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeActiveWidget(UCanvasPanel* ActiveWidget);
    
};

