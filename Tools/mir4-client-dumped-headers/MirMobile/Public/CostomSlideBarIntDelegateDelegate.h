#pragma once
#include "CoreMinimal.h"
#include "CostomSlideBarIntDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCostomSlideBarIntDelegate, const int32, IntValue);

