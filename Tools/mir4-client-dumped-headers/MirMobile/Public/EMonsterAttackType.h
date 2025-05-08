#pragma once
#include "CoreMinimal.h"
#include "EMonsterAttackType.generated.h"

UENUM(BlueprintType)
enum class EMonsterAttackType : uint8 {
    None,
    Melee,
    Range,
};

