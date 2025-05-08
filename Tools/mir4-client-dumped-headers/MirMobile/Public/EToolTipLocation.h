#pragma once
#include "CoreMinimal.h"
#include "EToolTipLocation.generated.h"

UENUM(BlueprintType)
enum class EToolTipLocation : uint8 {
    Auto,
    LeftTop,
    LeftBottom,
    RightTop,
    RightBottom,
    LeftCenter,
    RightCenter,
    CenterTop,
    CenterBottom,
};

