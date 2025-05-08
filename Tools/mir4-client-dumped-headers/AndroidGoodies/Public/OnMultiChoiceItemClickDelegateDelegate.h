#pragma once
#include "CoreMinimal.h"
#include "OnMultiChoiceItemClickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMultiChoiceItemClickDelegate, int32, Index, bool, isChosen);

