#pragma once
#include "CoreMinimal.h"
#include "EStereoDelaySourceEffect.generated.h"

UENUM(BlueprintType)
enum class EStereoDelaySourceEffect : uint8 {
    Normal,
    Cross,
    PingPong,
    Count,
};

