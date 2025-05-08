#pragma once
#include "CoreMinimal.h"
#include "EARTrackingQuality.generated.h"

UENUM(BlueprintType)
enum class EARTrackingQuality : uint8 {
    NotTracking,
    OrientationOnly,
    OrientationAndPosition,
};

