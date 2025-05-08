#pragma once
#include "CoreMinimal.h"
#include "DAMAGE_ATTRIBUTE.generated.h"

UENUM(BlueprintType)
enum class DAMAGE_ATTRIBUTE : uint8 {
    None,
    FireDmg,
    FrozenDmg,
    LightningDmg,
    PoisonDmg,
    HolyDmg,
};

