#pragma once
#include "CoreMinimal.h"
#include "ERBFFunctionType.generated.h"

UENUM(BlueprintType)
enum class ERBFFunctionType : uint8 {
    Gaussian,
    Exponential,
    Linear,
    Cubic,
    Quintic,
    DefaultFunction,
};

