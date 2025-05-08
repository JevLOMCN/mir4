#pragma once
#include "CoreMinimal.h"
#include "ESynthSlateSizeType.generated.h"

UENUM(BlueprintType)
enum class ESynthSlateSizeType : uint8 {
    Small,
    Medium,
    Large,
    Count,
};

