#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryTestClamping.generated.h"

UENUM(BlueprintType)
namespace EEnvQueryTestClamping {
    enum Type {
        None,
        SpecifiedValue,
        FilterThreshold,
    };
}

