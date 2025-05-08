#pragma once
#include "CoreMinimal.h"
#include "EWidgetBlendMode.generated.h"

UENUM(BlueprintType)
enum class EWidgetBlendMode : uint8 {
    Opaque,
    Masked,
    Transparent,
};

