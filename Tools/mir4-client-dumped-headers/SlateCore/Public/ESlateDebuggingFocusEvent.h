#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingFocusEvent.generated.h"

UENUM(BlueprintType)
enum class ESlateDebuggingFocusEvent : uint8 {
    FocusChanging,
    FocusLost,
    FocusReceived,
};

