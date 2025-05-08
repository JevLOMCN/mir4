#pragma once
#include "CoreMinimal.h"
#include "USE_CONTROL_TYPE.generated.h"

UENUM(BlueprintType)
enum class USE_CONTROL_TYPE : uint8 {
    None,
    ChargingControl,
    DodgeControl,
    DirectionControl,
};

