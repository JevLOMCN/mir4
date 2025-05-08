#pragma once
#include "CoreMinimal.h"
#include "EItemDataFeatureAvailability.generated.h"

UENUM(BlueprintType)
enum class EItemDataFeatureAvailability : uint8 {
    NONE,
    EQUIPMENT_RECOMMEND = 2,
    DEFAULT = EQUIPMENT_RECOMMEND,
};

