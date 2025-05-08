#pragma once
#include "CoreMinimal.h"
#include "EAudioSpectrumType.generated.h"

UENUM(BlueprintType)
enum class EAudioSpectrumType : uint8 {
    MagnitudeSpectrum,
    PowerSpectrum,
};

