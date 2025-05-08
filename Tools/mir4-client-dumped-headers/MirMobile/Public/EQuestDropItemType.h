#pragma once
#include "CoreMinimal.h"
#include "EQuestDropItemType.generated.h"

UENUM(BlueprintType)
enum class EQuestDropItemType : uint8 {
    MAIN = 1,
    MISSION_NORMAL,
    MISSION_REPEAT,
    DAILY_WORK,
    RELATION,
    REQUEST,
    GUILD,
};

