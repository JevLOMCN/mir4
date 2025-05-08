#pragma once
#include "CoreMinimal.h"
#include "EChaosTrailingSortMethod.generated.h"

UENUM(BlueprintType)
enum class EChaosTrailingSortMethod : uint8 {
    SortNone,
    SortByHighestMass,
    SortByHighestSpeed,
    SortByNearestFirst,
    Count,
};

