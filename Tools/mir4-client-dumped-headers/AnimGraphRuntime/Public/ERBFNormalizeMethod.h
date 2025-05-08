#pragma once
#include "CoreMinimal.h"
#include "ERBFNormalizeMethod.generated.h"

UENUM(BlueprintType)
enum class ERBFNormalizeMethod : uint8 {
    OnlyNormalizeAboveOne,
    AlwaysNormalize,
    NormalizeWithinMedian,
};

