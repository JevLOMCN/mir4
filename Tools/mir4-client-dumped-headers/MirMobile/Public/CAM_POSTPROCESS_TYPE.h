#pragma once
#include "CoreMinimal.h"
#include "CAM_POSTPROCESS_TYPE.generated.h"

UENUM(BlueprintType)
enum class CAM_POSTPROCESS_TYPE : uint8 {
    BLIND,
    FASTRUN,
    DASH_HIT,
};

