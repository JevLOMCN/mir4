#pragma once
#include "CoreMinimal.h"
#include "EOrientPositionSelector.generated.h"

UENUM(BlueprintType)
namespace EOrientPositionSelector {
    enum Type {
        Orientation,
        Position,
        OrientationAndPosition,
    };
}

