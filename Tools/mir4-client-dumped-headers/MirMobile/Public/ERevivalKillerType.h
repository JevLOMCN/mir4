#pragma once
#include "CoreMinimal.h"
#include "ERevivalKillerType.generated.h"

UENUM(BlueprintType)
enum class ERevivalKillerType : uint8 {
    UNKNOWN,
    USER,
    MONSTER,
    FALL_DEATH,
    SELF_DEATH,
};

