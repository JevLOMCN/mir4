#pragma once
#include "CoreMinimal.h"
#include "OnSingleChoiceItemClickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSingleChoiceItemClickDelegate, int32, Index);

