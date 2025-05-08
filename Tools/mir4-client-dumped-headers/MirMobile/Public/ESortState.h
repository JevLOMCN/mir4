#pragma once
#include "CoreMinimal.h"
#include "ESortState.generated.h"

UENUM(BlueprintType)
enum class ESortState : uint8 {
    NONE,
    ASCENDING,
    DESCENDING,
};

