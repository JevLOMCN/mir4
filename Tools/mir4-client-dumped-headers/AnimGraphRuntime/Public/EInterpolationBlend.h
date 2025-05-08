#pragma once
#include "CoreMinimal.h"
#include "EInterpolationBlend.generated.h"

UENUM(BlueprintType)
namespace EInterpolationBlend {
    enum Type {
        Linear,
        Cubic,
        Sinusoidal,
        EaseInOutExponent2,
        EaseInOutExponent3,
        EaseInOutExponent4,
        EaseInOutExponent5,
        MAX,
    };
}

