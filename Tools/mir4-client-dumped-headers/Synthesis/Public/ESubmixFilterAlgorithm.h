#pragma once
#include "CoreMinimal.h"
#include "ESubmixFilterAlgorithm.generated.h"

UENUM(BlueprintType)
enum class ESubmixFilterAlgorithm : uint8 {
    OnePole,
    StateVariable,
    Ladder,
    Count,
};

