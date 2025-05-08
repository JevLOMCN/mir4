#pragma once
#include "CoreMinimal.h"
#include "ChangeModelingSubStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeModelingSubStateDelegate, int32, NewSubState);

