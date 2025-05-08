#pragma once
#include "CoreMinimal.h"
#include "EAutoBattleState.generated.h"

UENUM(BlueprintType)
enum class EAutoBattleState : uint8 {
    None,
    AutoBattle_NoSkill,
    AutoBattle_Skill,
    AutoBattle_Gather,
};

