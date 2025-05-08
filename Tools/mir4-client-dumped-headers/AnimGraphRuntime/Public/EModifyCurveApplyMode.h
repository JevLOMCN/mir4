#pragma once
#include "CoreMinimal.h"
#include "EModifyCurveApplyMode.generated.h"

UENUM(BlueprintType)
enum class EModifyCurveApplyMode : uint8 {
    Add,
    Scale,
    Blend,
    WeightedMovingAverage,
    RemapCurve,
};

