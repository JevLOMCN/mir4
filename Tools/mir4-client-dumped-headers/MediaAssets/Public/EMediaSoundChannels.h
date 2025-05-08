#pragma once
#include "CoreMinimal.h"
#include "EMediaSoundChannels.generated.h"

UENUM()
enum class EMediaSoundChannels : int32 {
    Mono,
    Stereo,
    Surround,
};

