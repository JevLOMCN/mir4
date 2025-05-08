#pragma once
#include "CoreMinimal.h"
#include "EOccupationCommandSlotType.generated.h"

UENUM()
enum class EOccupationCommandSlotType : int32 {
    NONE,
    CIRCLE,
    SQUARE,
    TRIANGLE,
    DIAMOND,
    STAR,
    ONE,
    TWO,
    THREE,
};

