#pragma once
#include "CoreMinimal.h"
#include "ESynthFilterType.generated.h"

UENUM(BlueprintType)
enum class ESynthFilterType : uint8 {
    LowPass,
    HighPass,
    BandPass,
    BandStop,
    Count,
};

