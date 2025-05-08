#pragma once
#include "CoreMinimal.h"
#include "EGuildWarMonsterKind.generated.h"

UENUM()
enum class EGuildWarMonsterKind : int32 {
    NONE,
    CAPTURE,
    BARRICADE,
    CASTLEGATE,
    LEVER,
    SIEGETOWER,
    CATAPULT,
    SANCTUM,
    WARGATE,
    WARBOSS,
    TRAP,
    DarkAltar,
};

