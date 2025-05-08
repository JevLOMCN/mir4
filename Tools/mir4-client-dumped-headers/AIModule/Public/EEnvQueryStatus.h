#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryStatus.generated.h"

UENUM(BlueprintType)
namespace EEnvQueryStatus {
    enum Type {
        Processing,
        Success,
        Failed,
        Aborted,
        OwnerLost,
        MissingParam,
    };
}

