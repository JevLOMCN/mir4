#pragma once
#include "CoreMinimal.h"
#include "EPhaserLFOType.generated.h"

UENUM(BlueprintType)
enum class EPhaserLFOType : uint8 {
    Sine,
    UpSaw,
    DownSaw,
    Square,
    Triangle,
    Exponential,
    RandomSampleHold,
    Count,
};

