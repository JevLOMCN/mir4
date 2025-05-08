#pragma once
#include "CoreMinimal.h"
#include "EGranularSynthEnvelopeType.generated.h"

UENUM(BlueprintType)
enum class EGranularSynthEnvelopeType : uint8 {
    Rectangular,
    Triangle,
    DownwardTriangle,
    UpwardTriangle,
    ExponentialDecay,
    ExponentialIncrease,
    Gaussian,
    Hanning,
    Lanczos,
    Cosine,
    CosineSquared,
    Welch,
    Blackman,
    BlackmanHarris,
    Count,
};

