#pragma once
#include "CoreMinimal.h"
#include "ETouchPositionType.generated.h"

UENUM(BlueprintType)
enum class ETouchPositionType : uint8 {
    VIEWPORT_POSITION,
    VIEWPORT_PIXEL,
    LOCAL,
    TYPE_ABSOLUTE,
};

