#pragma once
#include "CoreMinimal.h"
#include "EItemGetWayItemMake.generated.h"

UENUM(BlueprintType)
enum class EItemGetWayItemMake : uint8 {
    ItemMakeUI = 1,
    ItemMakeNPC,
    ItemMakeNPC_Exchange,
};

