#pragma once
#include "CoreMinimal.h"
#include "E_FACTION_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_FACTION_TYPE : uint8 {
    Neutral,
    Friendly,
    Hostile,
};

