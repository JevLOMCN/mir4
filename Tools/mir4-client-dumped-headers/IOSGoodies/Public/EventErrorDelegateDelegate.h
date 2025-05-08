#pragma once
#include "CoreMinimal.h"
#include "EventErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FEventErrorDelegate, const FString&, Error);

