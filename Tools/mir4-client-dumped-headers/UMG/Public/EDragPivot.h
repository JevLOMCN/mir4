#pragma once
#include "CoreMinimal.h"
#include "EDragPivot.generated.h"

UENUM(BlueprintType)
enum class EDragPivot : uint8 {
    MouseDown,
    TopLeft,
    TopCenter,
    TopRight,
    CenterLeft,
    CenterCenter,
    CenterRight,
    BottomLeft,
    BottomCenter,
    BottomRight,
};

