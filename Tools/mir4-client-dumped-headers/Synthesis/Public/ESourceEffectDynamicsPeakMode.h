#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectDynamicsPeakMode.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectDynamicsPeakMode : uint8 {
    MeanSquared,
    RootMeanSquared,
    Peak,
    Count,
};

