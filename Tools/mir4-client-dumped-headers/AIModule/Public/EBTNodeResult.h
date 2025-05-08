#pragma once
#include "CoreMinimal.h"
#include "EBTNodeResult.generated.h"

UENUM(BlueprintType)
namespace EBTNodeResult {
    enum Type {
        Succeeded,
        Failed,
        Aborted,
        InProgress,
    };
}

