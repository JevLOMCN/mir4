#pragma once
#include "CoreMinimal.h"
#include "EPKModeType.generated.h"

UENUM(BlueprintType)
enum class EPKModeType : uint8 {
    BP_DefaultNone,
    Peace,
    GoodEvil,
    Enemy,
    ALLKill,
    Duel,
    Siege,
    War,
    Peace_ServerVisit,
    GoodEvil_ServerVisit,
    Enemy_ServerVisit,
    ALLKill_ServerVisit,
    Assissin_ServerVisit = 13,
};

