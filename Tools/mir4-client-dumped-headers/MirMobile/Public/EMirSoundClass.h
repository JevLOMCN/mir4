#pragma once
#include "CoreMinimal.h"
#include "EMirSoundClass.generated.h"

UENUM(BlueprintType)
enum class EMirSoundClass : uint8 {
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

