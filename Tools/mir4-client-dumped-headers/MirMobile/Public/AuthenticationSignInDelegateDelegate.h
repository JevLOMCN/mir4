#pragma once
#include "CoreMinimal.h"
#include "AuthenticationSignInDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAuthenticationSignInDelegate, const bool, Success);

