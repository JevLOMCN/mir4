#pragma once
#include "CoreMinimal.h"
#include "AdjustSessionFailure.h"
#include "OnSessionFailureDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionFailureDelegate, const FAdjustSessionFailure&, SessionFailure);

