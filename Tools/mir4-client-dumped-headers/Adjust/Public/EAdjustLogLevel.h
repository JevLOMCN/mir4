#pragma once
#include "CoreMinimal.h"
#include "EAdjustLogLevel.generated.h"

UENUM(BlueprintType)
enum class EAdjustLogLevel : uint8 {
    Verbose,
    Debug,
    Info,
    Warn,
    Error,
    Assert,
    Suppress,
};

