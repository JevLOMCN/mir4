#pragma once
#include "CoreMinimal.h"
#include "SKILL_STATE_TYPE.generated.h"

UENUM(BlueprintType)
enum class SKILL_STATE_TYPE : uint8 {
    Hit,
    StateControl,
    MoveControl,
};

