#pragma once
#include "CoreMinimal.h"
#include "EOccupationRewardType.generated.h"

UENUM()
enum class EOccupationRewardType : int32 {
    None,
    Buff,
    Item,
};

