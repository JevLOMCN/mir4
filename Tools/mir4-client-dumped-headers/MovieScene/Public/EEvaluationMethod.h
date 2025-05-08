#pragma once
#include "CoreMinimal.h"
#include "EEvaluationMethod.generated.h"

UENUM(BlueprintType)
enum class EEvaluationMethod : uint8 {
    Static,
    Swept,
};

