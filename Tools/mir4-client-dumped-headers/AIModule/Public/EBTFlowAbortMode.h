#pragma once
#include "CoreMinimal.h"
#include "EBTFlowAbortMode.generated.h"

UENUM(BlueprintType)
namespace EBTFlowAbortMode {
    enum Type {
        None,
        LowerPriority,
        Self,
        Both,
    };
}

