#pragma once
#include "CoreMinimal.h"
#include "EEnvTestScoreEquation.generated.h"

UENUM(BlueprintType)
namespace EEnvTestScoreEquation {
    enum Type {
        Linear,
        Square,
        InverseLinear,
        SquareRoot,
        Constant,
    };
}

