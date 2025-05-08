#pragma once
#include "CoreMinimal.h"
#include "EAIRWALK_STATE.generated.h"

UENUM(BlueprintType)
enum class EAIRWALK_STATE : uint8 {
    AIR_NONE,
    AIR_JUMP01,
    AIR_JUMP02,
    AIR_JUMP03,
    AIR_JUMP04,
    AIR_FALL01,
    AIR_FALL02,
    AIR_WALLJUMP,
    AIR_DASH_READY1,
    AIR_DASH_READY2,
    AIR_FLY,
    AIR_FLY2,
    AIR_LAND,
};

