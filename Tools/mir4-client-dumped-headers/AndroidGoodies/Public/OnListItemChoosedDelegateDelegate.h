#pragma once
#include "CoreMinimal.h"
#include "OnListItemChoosedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnListItemChoosedDelegate, int32, Index);

