#pragma once
#include "CoreMinimal.h"
#include "HIT_REACTION_TYPE.generated.h"

UENUM(BlueprintType)
enum class HIT_REACTION_TYPE : uint8 {
    None,
    Hit00,
    Hit01,
    Hit02,
};

