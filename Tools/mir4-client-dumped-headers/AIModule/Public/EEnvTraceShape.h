#pragma once
#include "CoreMinimal.h"
#include "EEnvTraceShape.generated.h"

UENUM(BlueprintType)
namespace EEnvTraceShape {
    enum Type {
        Line,
        Box,
        Sphere,
        Capsule,
    };
}

