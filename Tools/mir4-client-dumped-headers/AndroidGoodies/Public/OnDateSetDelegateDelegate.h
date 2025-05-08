#pragma once
#include "CoreMinimal.h"
#include "OnDateSetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnDateSetDelegate, int32, Year, int32, Month, int32, Day);

