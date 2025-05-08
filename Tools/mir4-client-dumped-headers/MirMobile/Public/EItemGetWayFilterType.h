#pragma once
#include "CoreMinimal.h"
#include "EItemGetWayFilterType.generated.h"

UENUM(BlueprintType)
enum class EItemGetWayFilterType : uint8 {
    NONE,
    FILTER_COMBATPOINT,
    FILTER_LEVEL,
};

