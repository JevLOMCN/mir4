#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectDynamicsPeakMode.generated.h"

UENUM(BlueprintType)
enum class ESubmixEffectDynamicsPeakMode : uint8 {
    MeanSquared,
    RootMeanSquared,
    Peak,
    Count,
};

