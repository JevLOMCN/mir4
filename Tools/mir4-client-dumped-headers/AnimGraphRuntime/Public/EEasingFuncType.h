#pragma once
#include "CoreMinimal.h"
#include "EEasingFuncType.generated.h"

UENUM(BlueprintType)
enum class EEasingFuncType : uint8 {
    Linear,
    Sinusoidal,
    Cubic,
    QuadraticInOut,
    CubicInOut,
    HermiteCubic,
    QuarticInOut,
    QuinticInOut,
    CircularIn,
    CircularOut,
    CircularInOut,
    ExpIn,
    ExpOut,
    ExpInOut,
    CustomCurve,
};

