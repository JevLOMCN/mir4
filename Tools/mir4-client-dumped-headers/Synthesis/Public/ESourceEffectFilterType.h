#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterType.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectFilterType : uint8 {
    LowPass,
    HighPass,
    BandPass,
    BandStop,
    Count,
};

