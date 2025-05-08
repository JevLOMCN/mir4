#pragma once
#include "CoreMinimal.h"
#include "QuestBattleType.generated.h"

UENUM(BlueprintType)
enum class QuestBattleType : uint8 {
    NONE,
    FIND_MONSTER,
    START_AUTOBATTLE,
};

