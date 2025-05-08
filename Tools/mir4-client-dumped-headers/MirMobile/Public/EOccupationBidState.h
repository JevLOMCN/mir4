#pragma once
#include "CoreMinimal.h"
#include "EOccupationBidState.generated.h"

UENUM(BlueprintType)
enum class EOccupationBidState : uint8 {
    NONE,
    DEFENSE,
    OFFENSE,
};

