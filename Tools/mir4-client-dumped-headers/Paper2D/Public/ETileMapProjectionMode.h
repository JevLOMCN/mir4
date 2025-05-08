#pragma once
#include "CoreMinimal.h"
#include "ETileMapProjectionMode.generated.h"

UENUM(BlueprintType)
namespace ETileMapProjectionMode {
    enum Type {
        Orthogonal,
        IsometricDiamond,
        IsometricStaggered,
        HexagonalStaggered,
    };
}

