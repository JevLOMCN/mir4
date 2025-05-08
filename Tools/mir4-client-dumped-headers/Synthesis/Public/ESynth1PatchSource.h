#pragma once
#include "CoreMinimal.h"
#include "ESynth1PatchSource.generated.h"

UENUM(BlueprintType)
enum class ESynth1PatchSource : uint8 {
    LFO1,
    LFO2,
    Envelope,
    BiasEnvelope,
    Count,
};

