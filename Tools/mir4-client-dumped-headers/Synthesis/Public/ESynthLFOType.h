#pragma once
#include "CoreMinimal.h"
#include "ESynthLFOType.generated.h"

UENUM(BlueprintType)
enum class ESynthLFOType : uint8 {
    Sine,
    UpSaw,
    DownSaw,
    Square,
    Triangle,
    Exponential,
    RandomSampleHold,
    Count,
};

