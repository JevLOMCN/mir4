#pragma once
#include "CoreMinimal.h"
#include "OnCheckBoxComponentStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckBoxComponentStateChanged, bool, bIsChecked);

