#pragma once
#include "CoreMinimal.h"
#include "OnAuthorizationStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAuthorizationStatusDelegate, const int32, AuthorizationStatus);

