#pragma once
#include "CoreMinimal.h"
#include "EObject_GetWayType.generated.h"

UENUM(BlueprintType)
enum class EObject_GetWayType : uint8 {
    GATHER_NORMAL = 1,
    GATHER_SPECIAL,
};

