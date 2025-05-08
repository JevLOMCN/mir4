#pragma once
#include "CoreMinimal.h"
#include "GuestRestoreDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGuestRestoreDelegate, const bool, Success, const FString&, Message);

