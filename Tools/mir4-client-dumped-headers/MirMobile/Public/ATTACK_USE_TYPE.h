#pragma once
#include "CoreMinimal.h"
#include "ATTACK_USE_TYPE.generated.h"

UENUM(BlueprintType)
enum class ATTACK_USE_TYPE : uint8 {
    TargetAtk,
    InstantAtk,
};

