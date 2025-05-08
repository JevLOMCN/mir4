#pragma once
#include "CoreMinimal.h"
#include "ECheckPhaseImpactReason.generated.h"

UENUM(BlueprintType)
enum class ECheckPhaseImpactReason : uint8 {
    BasicEndAttackAnim,
    BasicNextAttack,
    ExtendEndAttackAnim,
    PCUpdateNextSkill,
};

