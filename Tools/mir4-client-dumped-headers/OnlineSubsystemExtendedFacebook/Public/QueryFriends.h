#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "QueryFriendsDelegateDelegate.h"
#include "QueryFriends.generated.h"

class UQueryFriends;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UQueryFriends : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryFriendsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryFriendsDelegate OnFail;
    
    UQueryFriends();

    UFUNCTION(BlueprintCallable)
    static UQueryFriends* QueryFriends();
    
};

