#pragma once
#include "CoreMinimal.h"
#include "AUTO_STATE.generated.h"

UENUM(BlueprintType)
enum class AUTO_STATE : uint8 {
    None,
    BATTLE_AUTO,
    GATHER_AUTO,
    BATTLE_GATHER_AUTO,
    PLAY_AUTO,
    MAPMOVE_AUTO,
    QUEST_AUTO,
    AUTO_COUNTER,
};

