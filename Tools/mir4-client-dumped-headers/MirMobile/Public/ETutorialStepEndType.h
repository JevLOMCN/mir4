#pragma once
#include "CoreMinimal.h"
#include "ETutorialStepEndType.generated.h"

UENUM()
enum class ETutorialStepEndType : int32 {
    None,
    TouchTarget,
    TouchScreen,
    TouchScreenOrTimeEnd,
    Airwalk1stEnd,
    AirwalkLand,
    Airwalk2ndEnd,
    AirwalkDashReady,
    AirwalkDashJumpReady,
    AirwalkDash2Ready,
    SkillVirtualStickActive,
    BlockTouchTimer,
    SkillReleased,
    WallJumpReady,
    SpecialSkillReady,
    ToggleAutoSkill,
    VirtualStickMove,
    Max,
};

