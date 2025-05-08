#pragma once
#include "CoreMinimal.h"
#include "AIRWALK_TYPE.generated.h"

UENUM(BlueprintType)
enum class AIRWALK_TYPE : uint8 {
    None,
    First,
    FirstEnd,
    Second,
    WallJump,
    Dash,
    DashJumpReady,
    DashJump,
    Land,
    LandEnd,
    Fall,
    Max,
};

