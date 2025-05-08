#pragma once
#include "CoreMinimal.h"
#include "EFSM_TYPE.h"
#include "ChangeFSMDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeFSMDelegate, EFSM_TYPE, NewFSM);

