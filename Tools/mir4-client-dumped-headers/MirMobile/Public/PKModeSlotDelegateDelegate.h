#pragma once
#include "CoreMinimal.h"
#include "EPKModeType.h"
#include "PKModeSlotDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPKModeSlotDelegate, EPKModeType, Mode);

