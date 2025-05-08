#pragma once
#include "CoreMinimal.h"
#include "EConditionTriggerTargetType.generated.h"

UENUM(BlueprintType)
enum class EConditionTriggerTargetType : uint8 {
    PC,
    MONSTER,
};

