#pragma once
#include "CoreMinimal.h"
#include "EPointOnCircleSpacingMethod.generated.h"

UENUM(BlueprintType)
enum class EPointOnCircleSpacingMethod : uint8 {
    BySpaceBetween,
    ByNumberOfPoints,
};

