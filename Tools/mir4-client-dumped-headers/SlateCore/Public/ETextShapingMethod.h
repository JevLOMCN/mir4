#pragma once
#include "CoreMinimal.h"
#include "ETextShapingMethod.generated.h"

UENUM(BlueprintType)
enum class ETextShapingMethod : uint8 {
    Auto,
    KerningOnly,
    FullShaping,
};

