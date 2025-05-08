#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "InviteFriendsDelegateDelegate.h"
#include "InviteFriends.generated.h"

class UInviteFriends;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UInviteFriends : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteFriendsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteFriendsDelegate OnFail;
    
    UInviteFriends();

    UFUNCTION(BlueprintCallable)
    static UInviteFriends* InviteFriends(const TArray<FString>& FriendsIds);
    
};

