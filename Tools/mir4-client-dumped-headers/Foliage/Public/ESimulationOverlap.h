#pragma once
#include "CoreMinimal.h"
#include "ESimulationOverlap.generated.h"

UENUM(BlueprintType)
namespace ESimulationOverlap {
    enum Type {
        CollisionOverlap,
        ShadeOverlap,
        None,
    };
}

