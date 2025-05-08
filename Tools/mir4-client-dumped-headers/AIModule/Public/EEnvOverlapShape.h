#pragma once
#include "CoreMinimal.h"
#include "EEnvOverlapShape.generated.h"

UENUM(BlueprintType)
namespace EEnvOverlapShape {
    enum Type {
        Box,
        Sphere,
        Capsule,
    };
}

