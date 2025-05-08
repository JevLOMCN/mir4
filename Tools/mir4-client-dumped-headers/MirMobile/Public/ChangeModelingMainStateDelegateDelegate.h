#pragma once
#include "CoreMinimal.h"
#include "ChangeModelingMainStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeModelingMainStateDelegate, int32, NewMainState);

