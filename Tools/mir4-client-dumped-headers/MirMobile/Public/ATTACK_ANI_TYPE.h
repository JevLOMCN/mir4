#pragma once
#include "CoreMinimal.h"
#include "ATTACK_ANI_TYPE.generated.h"

UENUM(BlueprintType)
enum class ATTACK_ANI_TYPE : uint8 {
    None,
    NormalAttack,
    SkillAttack,
    EventAttack,
};

