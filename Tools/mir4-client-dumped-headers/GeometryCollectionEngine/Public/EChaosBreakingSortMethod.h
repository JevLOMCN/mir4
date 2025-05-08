#pragma once
#include "CoreMinimal.h"
#include "EChaosBreakingSortMethod.generated.h"

UENUM(BlueprintType)
enum class EChaosBreakingSortMethod : uint8 {
    SortNone,
    SortByHighestMass,
    SortByHighestSpeed,
    SortByNearestFirst,
    Count,
};

