#pragma once
#include "CoreMinimal.h"
#include "EEnvTestPurpose.generated.h"

UENUM(BlueprintType)
namespace EEnvTestPurpose {
    enum Type {
        Filter,
        Score,
        FilterAndScore,
    };
}

