#pragma once
#include "CoreMinimal.h"
#include "ETextFlowDirection.generated.h"

UENUM(BlueprintType)
enum class ETextFlowDirection : uint8 {
    Auto,
    LeftToRight,
    RightToLeft,
};

