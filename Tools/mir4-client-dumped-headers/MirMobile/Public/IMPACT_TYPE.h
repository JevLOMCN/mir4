#pragma once
#include "CoreMinimal.h"
#include "IMPACT_TYPE.generated.h"

UENUM(BlueprintType)
enum class IMPACT_TYPE : uint8 {
    Target,
    TargetCircle,
    SelfCircle,
    SelfDirect,
    Cross,
};

