#pragma once
#include "CoreMinimal.h"
#include "MaskTarget_PhysMesh.generated.h"

UENUM(BlueprintType)
enum class MaskTarget_PhysMesh : uint8 {
    None,
    MaxDistance,
    BackstopDistance,
    BackstopRadius,
    AnimDriveMultiplier,
};

