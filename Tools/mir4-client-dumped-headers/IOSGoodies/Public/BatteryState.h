#pragma once
#include "CoreMinimal.h"
#include "BatteryState.generated.h"

UENUM(BlueprintType)
enum class BatteryState : uint8 {
    Unknown,
    Unplugged,
    Charging,
    Full,
};

