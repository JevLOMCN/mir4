#pragma once
#include "CoreMinimal.h"
#include "OnFilesPickErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFilesPickErrorDelegate, const FString&, Error);

