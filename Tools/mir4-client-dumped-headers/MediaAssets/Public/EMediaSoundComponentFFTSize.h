#pragma once
#include "CoreMinimal.h"
#include "EMediaSoundComponentFFTSize.generated.h"

UENUM(BlueprintType)
enum class EMediaSoundComponentFFTSize : uint8 {
    Min_64,
    Small_256,
    Medium_512,
    Large_1024,
};

