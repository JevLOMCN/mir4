#pragma once
#include "CoreMinimal.h"
#include "IMPACT_SPAWN_TYPE.generated.h"

UENUM(BlueprintType)
enum class IMPACT_SPAWN_TYPE : uint8 {
    None,
    RandomPos,
    CurrentPos,
    AttackStartPos,
};

