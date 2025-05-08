#pragma once
#include "CoreMinimal.h"
#include "ESynth1OscType.generated.h"

UENUM(BlueprintType)
enum class ESynth1OscType : uint8 {
    Sine,
    Saw,
    Triangle,
    Square,
    Noise,
    Count,
};

