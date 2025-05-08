#pragma once
#include "CoreMinimal.h"
#include "EWidgetTickFrequency.generated.h"

UENUM(BlueprintType)
enum class EWidgetTickFrequency : uint8 {
    Never,
    Auto,
};

