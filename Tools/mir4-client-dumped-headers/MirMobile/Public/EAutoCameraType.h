#pragma once
#include "CoreMinimal.h"
#include "EAutoCameraType.generated.h"

UENUM(BlueprintType)
enum class EAutoCameraType : uint8 {
    NONE,
    DEFAULT,
    MANUAL_MOVING,
    WALK_AUTO_MOVING,
    RIDE_AUTO_MOVING,
    AIR_WALK,
    MANUAL_BATTLE,
    AUTO_BATTLE,
    SKILL_ING,
    SKILL_END,
};

