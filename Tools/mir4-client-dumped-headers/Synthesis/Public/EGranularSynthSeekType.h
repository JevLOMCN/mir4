#pragma once
#include "CoreMinimal.h"
#include "EGranularSynthSeekType.generated.h"

UENUM(BlueprintType)
enum class EGranularSynthSeekType : uint8 {
    FromBeginning,
    FromCurrentPosition,
    Count,
};

