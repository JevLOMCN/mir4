#pragma once
#include "CoreMinimal.h"
#include "EChangeIdleReason.generated.h"

UENUM(BlueprintType)
enum class EChangeIdleReason : uint8 {
    Unknown,
    NotFindPath,
    UseInput,
    EmptyTarget,
    DeadTarget,
    EmptySkill,
    EnableAttack,
    Stalled,
    DifferentTarget,
};

