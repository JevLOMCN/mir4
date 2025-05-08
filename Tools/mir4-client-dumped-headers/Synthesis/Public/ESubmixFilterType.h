#pragma once
#include "CoreMinimal.h"
#include "ESubmixFilterType.generated.h"

UENUM(BlueprintType)
enum class ESubmixFilterType : uint8 {
    LowPass,
    HighPass,
    BandPass,
    BandStop,
    Count,
};

