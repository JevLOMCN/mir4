#pragma once
#include "CoreMinimal.h"
#include "EMapMiniInfoMainType.generated.h"

UENUM(BlueprintType)
enum class EMapMiniInfoMainType : uint8 {
    None,
    Default,
    Waypoint,
    SafetyArea,
    Max,
};

