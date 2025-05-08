#pragma once
#include "CoreMinimal.h"
#include "EScaleChainInitialLength.generated.h"

UENUM(BlueprintType)
enum class EScaleChainInitialLength : uint8 {
    FixedDefaultLengthValue,
    Distance,
    ChainLength,
};

