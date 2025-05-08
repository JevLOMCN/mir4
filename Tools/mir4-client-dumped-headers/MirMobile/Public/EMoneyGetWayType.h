#pragma once
#include "CoreMinimal.h"
#include "EMoneyGetWayType.generated.h"

UENUM()
enum class EMoneyGetWayType {
    None,
    Cash_Store,
    Gather,
    Daily_Work,
    Meditation,
    MagicSquare,
    Quest_Mission,
    Event = 99,
    TreasureGoblin = 990,
    Trade = 999,
};

