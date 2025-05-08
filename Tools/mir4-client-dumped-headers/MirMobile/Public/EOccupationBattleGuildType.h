#pragma once
#include "CoreMinimal.h"
#include "EOccupationBattleGuildType.generated.h"

UENUM(BlueprintType)
enum class EOccupationBattleGuildType : uint8 {
    NONE,
    DEFENSE_MAIN,
    OFFENSE_MAIN,
    DEFENSE_ALLIANCE_1 = 4,
    DEFENSE_ALLIANCE_2 = 8,
    OFFENSE_ALLIANCE_1 = 16,
    OFFENSE_ALLIANCE_2 = 32,
    DEFENSE_GUILD = 13,
    OFFENSE_GUILD = 50,
    MAIN_GUILD = 3,
    ALLIANCE_GUILD = 60,
    ALLIANCE_TO_ALL = 20,
};

