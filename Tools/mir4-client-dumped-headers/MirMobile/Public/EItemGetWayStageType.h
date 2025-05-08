#pragma once
#include "CoreMinimal.h"
#include "EItemGetWayStageType.generated.h"

UENUM(BlueprintType)
enum class EItemGetWayStageType : uint8 {
    None,
    Normal,
    MagicSquare = 4,
    Gather = 8,
    Mine = 16,
    CombatPower = 32,
    NormalAndCombatPower,
    MineAndCombatPower = 48,
};

