#pragma once
#include "CoreMinimal.h"
#include "ERevivalHelpState.generated.h"

UENUM(BlueprintType)
enum class ERevivalHelpState : uint8 {
    UNKNOWN,
    NOT_TAOIST,
    NOT_HAVE_REVIVALSKILL,
    NOT_ENOUGH_SKILLLEVEL,
    NOT_NOT_IN_SKILLDECK,
    NOT_ENABLE_COOLTIME,
    ENABLE,
};

