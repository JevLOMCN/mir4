#pragma once
#include "CoreMinimal.h"
#include "AdjustSessionSuccess.h"
#include "OnSessionSuccessDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionSuccessDelegate, const FAdjustSessionSuccess&, SessionSuccess);

