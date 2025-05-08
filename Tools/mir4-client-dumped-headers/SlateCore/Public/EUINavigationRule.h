#pragma once
#include "CoreMinimal.h"
#include "EUINavigationRule.generated.h"

UENUM(BlueprintType)
enum class EUINavigationRule : uint8 {
    Escape,
    Explicit,
    Wrap,
    Stop,
    Custom,
    CustomBoundary,
    Invalid,
};

