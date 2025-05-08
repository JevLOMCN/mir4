#pragma once
#include "CoreMinimal.h"
#include "OnDateTimeSetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FOnDateTimeSetDelegate, int32, Year, int32, Month, int32, Day, int32, Hour, int32, Minute);

