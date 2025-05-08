#pragma once
#include "CoreMinimal.h"
#include "EEnvTestWeight.generated.h"

UENUM(BlueprintType)
namespace EEnvTestWeight {
    enum Type {
        None,
        Square,
        Inverse,
        Unused,
        Constant,
        Skip,
    };
}

