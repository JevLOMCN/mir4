#pragma once
#include "CoreMinimal.h"
#include "EARWorldMappingState.generated.h"

UENUM(BlueprintType)
enum class EARWorldMappingState : uint8 {
    NotAvailable,
    StillMappingNotRelocalizable,
    StillMappingRelocalizable,
    Mapped,
};

