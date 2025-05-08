#pragma once
#include "CoreMinimal.h"
#include "ESiegeCommandMacroType.generated.h"

UENUM(BlueprintType)
enum class ESiegeCommandMacroType : uint8 {
    ATTACK,
    ASSEMBLE,
    DEFECNCE,
    RETREAT,
    WAIT,
    MAX,
};

