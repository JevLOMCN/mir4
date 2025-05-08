#pragma once
#include "CoreMinimal.h"
#include "EStrongPointEventBuff.generated.h"

UENUM(BlueprintType)
enum class EStrongPointEventBuff : uint8 {
    NONE,
    DEBUFF_ALL,
    DEBUFF_ONE,
};

