#pragma once
#include "CoreMinimal.h"
#include "COSTUME_PARTS.generated.h"

UENUM(BlueprintType)
enum class COSTUME_PARTS : uint8 {
    PARTS_NONE,
    PARTS_WEAPON,
    PARTS_HAIR,
    PARTS_CLOTHES,
    PARTS_SHOULDERS,
    PARTS_BACK,
    PARTS_WAIST,
    PARTS_PET,
    PARTS_VEHICLE,
    PARTS_COSTUME_MAX = PARTS_WAIST UMETA(Hidden),
    PARTS_LUXURY_MAX = PARTS_VEHICLE UMETA(Hidden),
};

