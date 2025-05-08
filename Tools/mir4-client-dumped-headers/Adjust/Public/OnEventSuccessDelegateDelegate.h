#pragma once
#include "CoreMinimal.h"
#include "AdjustEventSuccess.h"
#include "OnEventSuccessDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventSuccessDelegate, const FAdjustEventSuccess&, EventSuccess);

