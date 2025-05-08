#pragma once
#include "CoreMinimal.h"
#include "ESoundwaveSampleRateSettings.generated.h"

UENUM(BlueprintType)
enum class ESoundwaveSampleRateSettings : uint8 {
    Max,
    High,
    Medium,
    Low,
    Min,
    MatchDevice,
};

