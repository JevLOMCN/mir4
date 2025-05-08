#pragma once
#include "CoreMinimal.h"
#include "EStereoChannelMode.generated.h"

UENUM(BlueprintType)
enum class EStereoChannelMode : uint8 {
    MidSide,
    LeftRight,
    count,
};

