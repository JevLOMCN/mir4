#pragma once
#include "CoreMinimal.h"
#include "InviteFriendsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInviteFriendsDelegate, const TArray<FString>&, InvitedFriends);

