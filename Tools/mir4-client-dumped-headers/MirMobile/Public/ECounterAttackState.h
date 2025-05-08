#pragma once
#include "CoreMinimal.h"
#include "ECounterAttackState.generated.h"

UENUM(BlueprintType)
enum class ECounterAttackState : uint8 {
    Disable,
    Enable_NoSkill,
    Enable_Skill,
};

