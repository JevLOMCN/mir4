#pragma once
#include "CoreMinimal.h"
#include "EProgressBarFillType.generated.h"

UENUM(BlueprintType)
namespace EProgressBarFillType {
    enum Type {
        LeftToRight,
        RightToLeft,
        FillFromCenter,
        TopToBottom,
        BottomToTop,
    };
}

