#pragma once
#include "CoreMinimal.h"
#include "EEnvTestDistance.generated.h"

UENUM(BlueprintType)
namespace EEnvTestDistance {
    enum Type {
        Distance3D,
        Distance2D,
        DistanceZ,
        DistanceAbsoluteZ,
    };
}

