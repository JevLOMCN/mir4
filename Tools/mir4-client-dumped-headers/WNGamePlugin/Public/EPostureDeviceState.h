#pragma once
#include "CoreMinimal.h"
#include "EPostureDeviceState.generated.h"

UENUM()
enum class EPostureDeviceState : int32 {
    POSTURE_UNKNOWN,
    POSTURE_CLOSED,
    POSTURE_HALF_OPENED,
    POSTURE_OPENED,
    POSTURE_FLIPPED,
};

