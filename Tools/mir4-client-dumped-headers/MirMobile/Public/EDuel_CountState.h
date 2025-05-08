#pragma once
#include "CoreMinimal.h"
#include "EDuel_CountState.generated.h"

UENUM(BlueprintType)
enum class EDuel_CountState : uint8 {
    None,
    Start,
    InSafeArea,
    RingOut,
};

