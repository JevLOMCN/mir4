#pragma once
#include "CoreMinimal.h"
#include "ENavSystemOverridePolicy.generated.h"

UENUM(BlueprintType)
enum class ENavSystemOverridePolicy : uint8 {
    Override,
    Append,
    Skip,
};

