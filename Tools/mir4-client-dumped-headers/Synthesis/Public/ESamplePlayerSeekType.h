#pragma once
#include "CoreMinimal.h"
#include "ESamplePlayerSeekType.generated.h"

UENUM(BlueprintType)
enum class ESamplePlayerSeekType : uint8 {
    FromBeginning,
    FromCurrentPosition,
    FromEnd,
    Count,
};

