#pragma once
#include "CoreMinimal.h"
#include "GrowthProgressDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrowthProgressDelegate, int32, LinkContentsID);

