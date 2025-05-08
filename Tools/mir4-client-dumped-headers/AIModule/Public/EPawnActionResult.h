#pragma once
#include "CoreMinimal.h"
#include "EPawnActionResult.generated.h"

UENUM(BlueprintType)
namespace EPawnActionResult {
    enum Type {
        NotStarted,
        InProgress,
        Success,
        Failed,
        Aborted,
    };
}

