#pragma once
#include "CoreMinimal.h"
#include "EContentsLightType.generated.h"

UENUM(BlueprintType)
enum class EContentsLightType : uint8 {
    NONE,
    CUSTOMIZING_CHARACTER,
    UI_CHARACTER,
    UI_FORCE,
    VEHICLE,
    PET_DARK,
    PET_BRIGHT,
    HOLYSTUFF,
};

