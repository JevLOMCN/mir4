#pragma once
#include "CoreMinimal.h"
#include "BatteryStatus.generated.h"

UENUM(BlueprintType)
enum class BatteryStatus : uint8 {
    UnknownStatus,
    Charging,
    Discharging,
    NotCharging,
    Full,
};

