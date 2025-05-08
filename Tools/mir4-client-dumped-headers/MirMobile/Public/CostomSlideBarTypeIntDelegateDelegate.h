#pragma once
#include "CoreMinimal.h"
#include "CostomSlideBarTypeIntDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCostomSlideBarTypeIntDelegate, const int32, SlideBarType, const int32, IntValue);

