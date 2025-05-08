#pragma once
#include "CoreMinimal.h"
#include "BatteryPluggedState.generated.h"

UENUM(BlueprintType)
enum BatteryPluggedState {
    OnBattery,
    Ac,
    Usb,
    Wireless = 4,
};

