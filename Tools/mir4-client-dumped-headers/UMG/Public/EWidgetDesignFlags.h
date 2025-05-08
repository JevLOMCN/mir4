#pragma once
#include "CoreMinimal.h"
#include "EWidgetDesignFlags.generated.h"

UENUM(BlueprintType)
enum class EWidgetDesignFlags : uint8 {
    None,
    Designing,
    ShowOutline,
    ExecutePreConstruct = 4,
};

