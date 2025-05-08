#pragma once
#include "CoreMinimal.h"
#include "EWaypointSubType.generated.h"

UENUM()
enum class EWaypointSubType : int32 {
    NONE,
    MINING_OBJECT,
    GATHER_OBJECT,
    BLACK_IRON,
    JINKI,
    WARGATE = 11,
    WARBOSS,
    WARTRAP,
    DRAGONCRACK = 21,
    GUILDCOOPBOSS,
    SANCTUARY = 31,
    MONOLITH,
    ALTAROFDARKNESS,
};

