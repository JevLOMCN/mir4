#pragma once
#include "CoreMinimal.h"
#include "ESectionEvaluationFlags.generated.h"

UENUM(BlueprintType)
enum class ESectionEvaluationFlags : uint8 {
    None,
    PreRoll,
    PostRoll,
};

