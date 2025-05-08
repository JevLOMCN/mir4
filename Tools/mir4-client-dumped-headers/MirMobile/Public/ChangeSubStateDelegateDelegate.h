#pragma once
#include "CoreMinimal.h"
#include "ChangeSubStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeSubStateDelegate, int32, NewSubState);

