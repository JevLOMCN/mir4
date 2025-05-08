#pragma once
#include "CoreMinimal.h"
#include "CurveInterpolationType.generated.h"

UENUM(BlueprintType)
enum class CurveInterpolationType : uint8 {
    AUTOINTERP,
    LINEAR,
    CONSTANT,
};

