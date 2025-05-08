#pragma once
#include "CoreMinimal.h"
#include "EPawnActionMoveMode.generated.h"

UENUM(BlueprintType)
namespace EPawnActionMoveMode {
    enum Type {
        UsePathfinding,
        StraightLine,
    };
}

