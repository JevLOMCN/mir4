#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingStateChangeEvent.generated.h"

UENUM(BlueprintType)
enum class ESlateDebuggingStateChangeEvent : uint8 {
    MouseCaptureGained,
    MouseCaptureLost,
};

