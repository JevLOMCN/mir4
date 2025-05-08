#pragma once
#include "CoreMinimal.h"
#include "GuestPWChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGuestPWChangeDelegate, const bool, Success, const FString&, Message);

