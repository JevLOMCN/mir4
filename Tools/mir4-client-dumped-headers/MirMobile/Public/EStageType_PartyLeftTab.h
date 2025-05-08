#pragma once
#include "CoreMinimal.h"
#include "EStageType_PartyLeftTab.generated.h"

UENUM(BlueprintType)
enum class EStageType_PartyLeftTab : uint8 {
    Party,
    Boss_Dungeon = 101,
    Party_Dungeon,
    Hell_Dungeon = 120,
    Guild = 200,
};

