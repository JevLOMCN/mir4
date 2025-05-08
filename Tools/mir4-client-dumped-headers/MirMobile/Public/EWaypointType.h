#pragma once
#include "CoreMinimal.h"
#include "EWaypointType.generated.h"

UENUM()
enum class EWaypointType : int32 {
    NONE,
    DEFAULT,
    MONSTER,
    COLLECT_ZONE,
    NPC,
    SUMMON_AREA = 6,
    PLUNDER = 9,
    NON_LIST = 12,
    COMPETE,
};

