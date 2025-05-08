#pragma once
#include "CoreMinimal.h"
#include "EEmitterType.generated.h"

UENUM(BlueprintType)
enum class EEmitterType : uint8 {
    Gravity,
    Radial,
    Curve,
};

