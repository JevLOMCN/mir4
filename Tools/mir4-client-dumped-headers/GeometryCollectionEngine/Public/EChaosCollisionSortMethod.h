#pragma once
#include "CoreMinimal.h"
#include "EChaosCollisionSortMethod.generated.h"

UENUM(BlueprintType)
enum class EChaosCollisionSortMethod : uint8 {
    SortNone,
    SortByHighestMass,
    SortByHighestSpeed,
    SortByHighestImpulse,
    SortByNearestFirst,
    Count,
};

