#pragma once
#include "CoreMinimal.h"
#include "UserFinishDelegateDelegate.generated.h"

class UFirebaseUser;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUserFinishDelegate, UFirebaseUser*, user, int32, ErrorCode, const FString&, errmsg);

