#pragma once
#include "CoreMinimal.h"
#include "ETownNPCPositionType.generated.h"

UENUM()
enum class ETownNPCPositionType {
    NONE = -1,
    POTION = 0,
    GOODS,
    MAX,
};

