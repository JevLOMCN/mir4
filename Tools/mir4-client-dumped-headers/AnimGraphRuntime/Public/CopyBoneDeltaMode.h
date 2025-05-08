#pragma once
#include "CoreMinimal.h"
#include "CopyBoneDeltaMode.generated.h"

UENUM(BlueprintType)
enum class CopyBoneDeltaMode : uint8 {
    Accumulate,
    Copy,
};

