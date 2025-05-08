#pragma once
#include "CoreMinimal.h"
#include "OnImageWriteCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImageWriteComplete, bool, bSuccess);

