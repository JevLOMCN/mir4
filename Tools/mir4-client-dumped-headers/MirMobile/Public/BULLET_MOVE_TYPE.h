#pragma once
#include "CoreMinimal.h"
#include "BULLET_MOVE_TYPE.generated.h"

UENUM(BlueprintType)
enum class BULLET_MOVE_TYPE : uint8 {
    None,
    TargetMove,
    GroundMove,
    TargetCurve,
    DirectMove,
};

