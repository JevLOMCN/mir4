#pragma once
#include "CoreMinimal.h"
#include "EDirectingTriggerType.generated.h"

UENUM(BlueprintType)
enum class EDirectingTriggerType : uint8 {
    SMALL_TALK,
    CINEMATIC_DIALOGUE,
    LEVEL_SEQUENCE,
};

