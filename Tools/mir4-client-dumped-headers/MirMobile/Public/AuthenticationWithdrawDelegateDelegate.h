#pragma once
#include "CoreMinimal.h"
#include "AuthenticationWithdrawDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAuthenticationWithdrawDelegate, const bool, Success);

