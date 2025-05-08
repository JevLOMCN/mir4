#pragma once
#include "CoreMinimal.h"
#include "OneStoreLogoutDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOneStoreLogoutDelegate, const bool, Success, const FString&, Message);

