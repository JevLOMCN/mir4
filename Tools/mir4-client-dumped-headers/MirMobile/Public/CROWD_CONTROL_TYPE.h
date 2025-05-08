#pragma once
#include "CoreMinimal.h"
#include "CROWD_CONTROL_TYPE.generated.h"

UENUM(BlueprintType)
enum class CROWD_CONTROL_TYPE : uint8 {
    None,
    Hit,
    Stun,
    Taunt,
    LapidifiCation,
    KnockBack,
    KnockDown,
    KnockFront,
    PushToPoint,
    Sleep,
    AttackBack = 99,
};

