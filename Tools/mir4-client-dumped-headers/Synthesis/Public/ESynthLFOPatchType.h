#pragma once
#include "CoreMinimal.h"
#include "ESynthLFOPatchType.generated.h"

UENUM(BlueprintType)
enum class ESynthLFOPatchType : uint8 {
    PatchToNone,
    PatchToGain,
    PatchToOscFreq,
    PatchToFilterFreq,
    PatchToFilterQ,
    PatchToOscPulseWidth,
    PatchToOscPan,
    PatchLFO1ToLFO2Frequency,
    PatchLFO1ToLFO2Gain,
    Count,
};

