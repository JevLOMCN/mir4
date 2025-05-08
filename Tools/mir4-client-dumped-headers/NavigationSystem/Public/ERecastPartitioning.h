#pragma once
#include "CoreMinimal.h"
#include "ERecastPartitioning.generated.h"

UENUM(BlueprintType)
namespace ERecastPartitioning {
    enum Type {
        Monotone,
        Watershed,
        ChunkyMonotone,
    };
}

