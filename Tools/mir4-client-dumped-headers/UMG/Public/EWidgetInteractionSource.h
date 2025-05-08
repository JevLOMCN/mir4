#pragma once
#include "CoreMinimal.h"
#include "EWidgetInteractionSource.generated.h"

UENUM(BlueprintType)
enum class EWidgetInteractionSource : uint8 {
    World,
    Mouse,
    CenterScreen,
    Custom,
};

