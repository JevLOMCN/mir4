#pragma once
#include "CoreMinimal.h"
#include "EEnvTestPathfinding.generated.h"

UENUM(BlueprintType)
namespace EEnvTestPathfinding {
    enum Type {
        PathExist,
        PathCost,
        PathLength,
    };
}

