#pragma once
#include "CoreMinimal.h"
#include "EClearSkillReserveReason.generated.h"

UENUM(BlueprintType)
enum class EClearSkillReserveReason : uint8 {
    ChangeTarget_Character,
    ChangeTarget_Object,
    ChangeAutoState,
    NormalAttackEnd,
    SkillAttackEnd,
    ManualInput,
    Unknown = 7,
};

