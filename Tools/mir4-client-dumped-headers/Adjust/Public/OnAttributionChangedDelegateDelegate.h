#pragma once
#include "CoreMinimal.h"
#include "AdjustAttribution.h"
#include "OnAttributionChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributionChangedDelegate, const FAdjustAttribution&, Attribution);

