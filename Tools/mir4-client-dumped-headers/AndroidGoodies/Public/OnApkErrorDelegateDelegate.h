#pragma once
#include "CoreMinimal.h"
#include "OnApkErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnApkErrorDelegate, const FString&, Error);

