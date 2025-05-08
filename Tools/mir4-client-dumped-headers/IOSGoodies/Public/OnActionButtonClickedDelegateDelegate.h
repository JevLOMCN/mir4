#pragma once
#include "CoreMinimal.h"
#include "OnActionButtonClickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnActionButtonClickedDelegate, int32, Index);

