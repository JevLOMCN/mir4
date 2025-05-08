#pragma once
#include "CoreMinimal.h"
#include "ETutorialGuidStrPosType.generated.h"

UENUM()
enum class ETutorialGuidStrPosType : int32 {
    None,
    LeftTop,
    LeftBottom,
    RightTop,
    RightBottom,
    Left,
    Right,
    Top,
    Bottom,
    Max,
};

