#pragma once
#include "CoreMinimal.h"
#include "SKILLCOST_TYPE.generated.h"

UENUM(BlueprintType)
enum class SKILLCOST_TYPE : uint8 {
    None,
    Rage,
    Mana,
    Psychic,
    Vitality,
    Madness,
};

