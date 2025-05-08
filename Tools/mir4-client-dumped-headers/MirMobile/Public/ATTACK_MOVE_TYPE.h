#pragma once
#include "CoreMinimal.h"
#include "ATTACK_MOVE_TYPE.generated.h"

UENUM(BlueprintType)
enum class ATTACK_MOVE_TYPE : uint8 {
    None,
    TargetMov,
    DirectMov,
    ForwardMov,
};

