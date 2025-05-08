#pragma once
#include "CoreMinimal.h"
#include "ESynthStereoDelayMode.generated.h"

UENUM(BlueprintType)
enum class ESynthStereoDelayMode : uint8 {
    Normal,
    Cross,
    PingPong,
    Count,
};

