#pragma once
#include "CoreMinimal.h"
#include "BatteryHealth.generated.h"

UENUM(BlueprintType)
enum class BatteryHealth : uint8 {
    UnknownHealth,
    Good,
    Overheat,
    Dead,
    OverVoltage,
    UnspecifiedFailure,
    Cold,
};

