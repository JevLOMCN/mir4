#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "QueryInvitableFriendsDelegateDelegate.h"
#include "QueryInvitableFriends.generated.h"

class UQueryInvitableFriends;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UQueryInvitableFriends : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryInvitableFriendsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryInvitableFriendsDelegate OnFail;
    
    UQueryInvitableFriends();

    UFUNCTION(BlueprintCallable)
    static UQueryInvitableFriends* QueryInvitableFriends(int32 Limit);
    
};

