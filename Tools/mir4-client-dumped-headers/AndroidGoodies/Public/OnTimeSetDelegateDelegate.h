#pragma once
#include "CoreMinimal.h"
#include "OnTimeSetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTimeSetDelegate, int32, Hour, int32, Minute);

