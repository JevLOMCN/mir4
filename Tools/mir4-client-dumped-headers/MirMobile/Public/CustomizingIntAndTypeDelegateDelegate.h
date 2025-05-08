#pragma once
#include "CoreMinimal.h"
#include "CustomizingIntAndTypeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCustomizingIntAndTypeDelegate, const int32, IntTypeValue, const int32, IntValue);

