#pragma once
#include "CoreMinimal.h"
#include "SKILL_PRODUCTTYPE.generated.h"

UENUM(BlueprintType)
enum class SKILL_PRODUCTTYPE : uint8 {
    None,
    ChainMove,
    RotationMove,
    ChainAttack,
    AutoTargetMove,
};

