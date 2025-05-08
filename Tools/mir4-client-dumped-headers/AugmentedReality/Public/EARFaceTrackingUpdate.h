#pragma once
#include "CoreMinimal.h"
#include "EARFaceTrackingUpdate.generated.h"

UENUM(BlueprintType)
enum class EARFaceTrackingUpdate : uint8 {
    CurvesAndGeo,
    CurvesOnly,
};

