#pragma once
#include "CoreMinimal.h"
#include "EEyeTrackerStatus.generated.h"

UENUM(BlueprintType)
enum class EEyeTrackerStatus : uint8 {
    NotConnected,
    NotTracking,
    Tracking,
};

