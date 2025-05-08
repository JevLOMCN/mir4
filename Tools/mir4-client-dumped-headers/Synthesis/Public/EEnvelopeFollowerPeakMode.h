#pragma once
#include "CoreMinimal.h"
#include "EEnvelopeFollowerPeakMode.generated.h"

UENUM(BlueprintType)
enum class EEnvelopeFollowerPeakMode : uint8 {
    MeanSquared,
    RootMeanSquared,
    Peak,
    Count,
};

