#pragma once
#include "CoreMinimal.h"
#include "ESimulationQuery.generated.h"

UENUM(BlueprintType)
namespace ESimulationQuery {
    enum Type {
        None,
        CollisionOverlap,
        ShadeOverlap,
        AnyOverlap,
    };
}

