#pragma once
#include "CoreMinimal.h"
#include "EEQSNormalizationType.generated.h"

UENUM(BlueprintType)
enum class EEQSNormalizationType : uint8 {
    Absolute,
    RelativeToScores,
};

