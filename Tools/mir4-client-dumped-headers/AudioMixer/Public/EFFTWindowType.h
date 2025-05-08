#pragma once
#include "CoreMinimal.h"
#include "EFFTWindowType.generated.h"

UENUM(BlueprintType)
enum class EFFTWindowType : uint8 {
    None,
    Hamming,
    Hann,
    Blackman,
};

