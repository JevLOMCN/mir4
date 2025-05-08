#pragma once
#include "CoreMinimal.h"
#include "EMMSoundType.generated.h"

UENUM(BlueprintType)
enum class EMMSoundType : uint8 {
    NONE,
    MASTER,
    BGM,
    AMBIENT,
    SFX,
    UI,
    VOICE,
    VOICE_DIALOGUE,
    VOICE_MALE,
    VOICE_FEMALE,
    MAX,
};

