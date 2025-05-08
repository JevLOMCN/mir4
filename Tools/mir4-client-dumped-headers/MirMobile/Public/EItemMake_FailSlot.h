#pragma once
#include "CoreMinimal.h"
#include "EItemMake_FailSlot.generated.h"

UENUM(BlueprintType)
enum class EItemMake_FailSlot : uint8 {
    SLOT_0,
    SLOT_1,
    SLOT_2,
    SLOT_3,
    MAX,
};

