#pragma once
#include "CoreMinimal.h"
#include "ETutorialUIGuideType.generated.h"

UENUM()
enum class ETutorialUIGuideType : int32 {
    None = -1,
    NoGuidBox = 0,
    Circle,
    Rectangle,
    Max,
};

