#pragma once
#include "CoreMinimal.h"
#include "EFSM_TYPE.h"
#include "FsmEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFsmEventDelegate, EFSM_TYPE, eventType, int32, EventValue);

