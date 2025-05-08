#pragma once
#include "CoreMinimal.h"
#include "ESlateAccessibleBehavior.generated.h"

UENUM(BlueprintType)
enum class ESlateAccessibleBehavior : uint8 {
    NotAccessible,
    Auto,
    Summary,
    Custom,
    ToolTip,
};

