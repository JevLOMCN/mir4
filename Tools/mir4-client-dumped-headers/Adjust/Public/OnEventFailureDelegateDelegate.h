#pragma once
#include "CoreMinimal.h"
#include "AdjustEventFailure.h"
#include "OnEventFailureDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventFailureDelegate, const FAdjustEventFailure&, EventFailure);

