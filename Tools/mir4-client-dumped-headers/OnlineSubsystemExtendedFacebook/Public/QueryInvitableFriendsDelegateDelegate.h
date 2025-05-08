#pragma once
#include "CoreMinimal.h"
#include "FacebookFriend.h"
#include "QueryInvitableFriendsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQueryInvitableFriendsDelegate, const TArray<FFacebookFriend>&, InvitableFriends);

