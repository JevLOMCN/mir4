#pragma once
#include "CoreMinimal.h"
#include "EAlignmentType.generated.h"

UENUM(BlueprintType)
enum class EAlignmentType : uint8 {
    None,
    Fill,
    Center,
    Left,
    Right,
    CenterTop,
    LeftTop,
    RightTop,
    CenterBottom,
    LeftBottom,
    RightBottom,
};

