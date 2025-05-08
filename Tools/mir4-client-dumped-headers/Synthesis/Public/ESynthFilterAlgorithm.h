#pragma once
#include "CoreMinimal.h"
#include "ESynthFilterAlgorithm.generated.h"

UENUM(BlueprintType)
enum class ESynthFilterAlgorithm : uint8 {
    OnePole,
    StateVariable,
    Ladder,
    Count,
};

