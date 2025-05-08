#pragma once
#include "CoreMinimal.h"
#include "EUIParticlePropertyType.generated.h"

UENUM(BlueprintType)
enum class EUIParticlePropertyType : uint8 {
    Float,
    FloatRange,
    FloatCurve,
    FloatCurveRange,
    Vector2D,
    Vector2DRange,
    LinearColorCurve,
    LinearColorCurveRange,
};

