#pragma once
#include "CoreMinimal.h"
#include "EFontLayoutMethod.generated.h"

UENUM(BlueprintType)
enum class EFontLayoutMethod : uint8 {
    Metrics,
    BoundingBox,
};

