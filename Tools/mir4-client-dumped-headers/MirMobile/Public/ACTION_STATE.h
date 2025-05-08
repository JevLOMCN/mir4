#pragma once
#include "CoreMinimal.h"
#include "ACTION_STATE.generated.h"

UENUM(BlueprintType)
enum class ACTION_STATE : uint8 {
    BP_DefaultNone,
    None,
    Ride,
    Casting = 4,
};

