#pragma once
#include "CoreMinimal.h"
#include "EEnvTestFilterOperator.generated.h"

UENUM(BlueprintType)
namespace EEnvTestFilterOperator {
    enum Type {
        AllPass,
        AnyPass,
    };
}

