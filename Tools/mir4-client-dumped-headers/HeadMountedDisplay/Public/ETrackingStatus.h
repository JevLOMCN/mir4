#pragma once
#include "CoreMinimal.h"
#include "ETrackingStatus.generated.h"

UENUM(BlueprintType)
enum class ETrackingStatus : uint8 {
    NotTracked,
    InertialOnly,
    Tracked,
};

