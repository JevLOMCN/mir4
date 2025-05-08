#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryRunMode.generated.h"

UENUM(BlueprintType)
namespace EEnvQueryRunMode {
    enum Type {
        SingleResult,
        RandomBest5Pct,
        RandomBest25Pct,
        AllMatching,
    };
}

