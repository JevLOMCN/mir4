#pragma once
#include "CoreMinimal.h"
#include "ESynth1PatchDestination.generated.h"

UENUM(BlueprintType)
enum class ESynth1PatchDestination : uint8 {
    Osc1Gain,
    Osc1Frequency,
    Osc1Pulsewidth,
    Osc2Gain,
    Osc2Frequency,
    Osc2Pulsewidth,
    FilterFrequency,
    FilterQ,
    Gain,
    Pan,
    LFO1Frequency,
    LFO1Gain,
    LFO2Frequency,
    LFO2Gain,
    Count,
};

