#pragma once
#include "CoreMinimal.h"
#include "EObject_GatherType.generated.h"

UENUM(BlueprintType)
enum class EObject_GatherType : uint8 {
    NONE,
    PLANTS,
    ORE,
    BOX,
    JINKI,
    BLACKIRON,
};

