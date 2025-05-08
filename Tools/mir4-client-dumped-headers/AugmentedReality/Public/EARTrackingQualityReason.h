#pragma once
#include "CoreMinimal.h"
#include "EARTrackingQualityReason.generated.h"

UENUM(BlueprintType)
enum class EARTrackingQualityReason : uint8 {
    None,
    Initializing,
    Relocalizing,
    ExcessiveMotion,
    InsufficientFeatures,
};

