#pragma once
#include "CoreMinimal.h"
#include "EProgressStep.generated.h"

UENUM(BlueprintType)
enum class EProgressStep : uint8 {
    STEP_0,
    STEP_1,
    STEP_2,
    STEP_3,
    STEP_4,
    STEP_MAX UMETA(Hidden),
    None = 99,
};

