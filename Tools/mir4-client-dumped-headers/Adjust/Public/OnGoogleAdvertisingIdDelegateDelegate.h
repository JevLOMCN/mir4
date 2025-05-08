#pragma once
#include "CoreMinimal.h"
#include "OnGoogleAdvertisingIdDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoogleAdvertisingIdDelegate, const FString&, GoogleAdId);

