#pragma once
#include "CoreMinimal.h"
#include "EARLineTraceChannels.generated.h"

UENUM(BlueprintType)
enum class EARLineTraceChannels : uint8 {
    None,
    FeaturePoint,
    GroundPlane,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
};

