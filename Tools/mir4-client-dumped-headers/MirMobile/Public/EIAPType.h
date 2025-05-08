#pragma once
#include "CoreMinimal.h"
#include "EIAPType.generated.h"

UENUM(BlueprintType)
enum class EIAPType : uint8 {
    NONE,
    DEFAULT,
    PRE_REWARD,
    PROMOTION,
};

