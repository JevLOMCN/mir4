#pragma once
#include "CoreMinimal.h"
#include "EConsumeMouseWheel.generated.h"

UENUM(BlueprintType)
enum class EConsumeMouseWheel : uint8 {
    WhenScrollingPossible,
    Always,
    Never,
};

