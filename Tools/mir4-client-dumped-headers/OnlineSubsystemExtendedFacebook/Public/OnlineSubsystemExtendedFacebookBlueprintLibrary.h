#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FacebookAchievement.h"
#include "FacebookFriend.h"
#include "FacebookProfile.h"
#include "OnlineSubsystemExtendedFacebookBlueprintLibrary.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UOnlineSubsystemExtendedFacebookBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineSubsystemExtendedFacebookBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResetActiveWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUsername();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetUserId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFacebookProfile GetCachedFacebookUserInfo(const FString& UserID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFacebookFriend GetCachedFacebookFriend(const FString& FriendId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllCachedFacebookUsersInfo(TArray<FFacebookProfile>& Users);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllCachedFacebookFriends(TArray<FFacebookFriend>& Friends);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllCachedFacebookAchievements(TArray<FFacebookAchievement>& Achievements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccessToken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIfPlayerLoggedIn();
    
    UFUNCTION(BlueprintCallable)
    static void ChangeActiveWidget(UCanvasPanel* ActiveWidget);
    
};

