#pragma once
#include "CoreMinimal.h"
#include "EMinimapFeatureAvailability.generated.h"

UENUM()
enum class EMinimapFeatureAvailability : int32 {
    NONE,
    VIEW_USER_INFO,
    VIEW_COMMAND_INFO,
    VIEW_OBJECT_INFO = 4,
    VIEW_CHARACTER_DIE = 8,
    VIEW_REVIVAL_LOCATION_INFO = 16,
    FUNC_TOUCH_POSITION = 32,
    DEFAULT_VIEW = 23,
    DEFAULT_FUNC = FUNC_TOUCH_POSITION,
    DEFAULT = 55,
    REVIVAL_SELECT = 24,
};

