#pragma once
#include "CoreMinimal.h"
#include "EDungeonCategory.generated.h"

UENUM(BlueprintType)
enum class EDungeonCategory : uint8 {
    NONE,
    EXP,
    GOLD,
    MATERIAL,
    EQUIPMENT,
    VEHICLE,
    GEM,
    SKILLSTONE,
};

