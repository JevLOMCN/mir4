#pragma once
#include "CoreMinimal.h"
#include "EFFTPeakInterpolationMethod.generated.h"

UENUM(BlueprintType)
enum class EFFTPeakInterpolationMethod : uint8 {
    NearestNeighbor,
    Linear,
    Quadratic,
};

