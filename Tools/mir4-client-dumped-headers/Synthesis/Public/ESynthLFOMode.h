#pragma once
#include "CoreMinimal.h"
#include "ESynthLFOMode.generated.h"

UENUM(BlueprintType)
enum class ESynthLFOMode : uint8 {
    Sync,
    OneShot,
    Free,
    Count,
};

