#pragma once
#include "CoreMinimal.h"
#include "EIAPLogLevel.generated.h"

UENUM(BlueprintType)
enum class EIAPLogLevel : uint8 {
    None,
    Trace = 2,
    Information = 4,
    Debug = 8,
    ALL = 14,
};

