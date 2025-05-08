#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterCircuit.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectFilterCircuit : uint8 {
    OnePole,
    StateVariable,
    Ladder,
    Count,
};

