#pragma once
#include "CoreMinimal.h"
#include "ESynthModEnvPatch.generated.h"

UENUM(BlueprintType)
enum class ESynthModEnvPatch : uint8 {
    PatchToNone,
    PatchToOscFreq,
    PatchToFilterFreq,
    PatchToFilterQ,
    PatchToLFO1Gain,
    PatchToLFO2Gain,
    PatchToLFO1Freq,
    PatchToLFO2Freq,
    Count,
};

