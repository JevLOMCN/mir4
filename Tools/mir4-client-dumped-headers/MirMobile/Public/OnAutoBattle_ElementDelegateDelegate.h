#pragma once
#include "CoreMinimal.h"
#include "OnAutoBattle_ElementDelegateDelegate.generated.h"

class UMM_HudAutoBattle_Element;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAutoBattle_ElementDelegate, UMM_HudAutoBattle_Element*, MyPtr);

