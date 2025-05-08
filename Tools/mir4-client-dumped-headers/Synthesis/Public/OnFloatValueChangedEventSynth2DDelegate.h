#pragma once
#include "CoreMinimal.h"
#include "OnFloatValueChangedEventSynth2DDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloatValueChangedEventSynth2D, float, Value);

