#pragma once
#include "CoreMinimal.h"
#include "EChaosSolverTickMode.generated.h"

UENUM(BlueprintType)
enum class EChaosSolverTickMode : uint8 {
    Fixed,
    Variable,
    VariableCapped,
    VariableCappedWithTarget,
};

