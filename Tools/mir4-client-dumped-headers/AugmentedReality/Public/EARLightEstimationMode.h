#pragma once
#include "CoreMinimal.h"
#include "EARLightEstimationMode.generated.h"

UENUM(BlueprintType)
enum class EARLightEstimationMode : uint8 {
    None,
    AmbientLightEstimate,
    DirectionalLightEstimate,
};

