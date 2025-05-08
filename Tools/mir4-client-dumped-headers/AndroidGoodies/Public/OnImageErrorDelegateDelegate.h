#pragma once
#include "CoreMinimal.h"
#include "OnImageErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnImageErrorDelegate, const FString&, Error);

