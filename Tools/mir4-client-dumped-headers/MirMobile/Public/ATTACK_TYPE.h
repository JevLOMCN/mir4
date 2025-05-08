#pragma once
#include "CoreMinimal.h"
#include "ATTACK_TYPE.generated.h"

UENUM(BlueprintType)
enum class ATTACK_TYPE : uint8 {
    None,
    DefaultAttack,
    DashAttack,
    JumpAttack,
    TeleportAttack,
};

