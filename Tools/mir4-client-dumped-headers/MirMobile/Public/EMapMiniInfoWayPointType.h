#pragma once
#include "CoreMinimal.h"
#include "EMapMiniInfoWayPointType.generated.h"

UENUM(BlueprintType)
enum class EMapMiniInfoWayPointType : uint8 {
    None,
    Default,
    Monster,
    MiningZone,
    NPC,
    FixedNPC,
    SummonArea,
    EventNPC,
    Plunder = 9,
    NonList = 12,
    Compete,
    Max,
};

