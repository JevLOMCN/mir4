#pragma once
#include "CoreMinimal.h"
#include "EFoliageScaling.generated.h"

UENUM(BlueprintType)
enum class EFoliageScaling : uint8 {
    Uniform,
    Free,
    LockXY,
    LockXZ,
    LockYZ,
};

