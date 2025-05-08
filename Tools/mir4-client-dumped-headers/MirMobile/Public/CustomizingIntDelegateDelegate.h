#pragma once
#include "CoreMinimal.h"
#include "CustomizingIntDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomizingIntDelegate, const int32, IntValue);

