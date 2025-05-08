#pragma once
#include "CoreMinimal.h"
#include "ESkillState.generated.h"

UENUM(BlueprintType)
enum class ESkillState : uint8 {
    Normal,
    EnableSkill,
    EnableSmite,
};

