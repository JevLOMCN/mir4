#pragma once
#include "CoreMinimal.h"
#include "OnConfirmInputButtonClickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnConfirmInputButtonClickedDelegate, const FString&, Result);

