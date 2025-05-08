#pragma once
#include "CoreMinimal.h"
#include "EFourPlayerSplitScreenType.generated.h"

UENUM(BlueprintType)
enum class EFourPlayerSplitScreenType : uint8 {
    Grid,
    Vertical,
    Horizontal,
};

