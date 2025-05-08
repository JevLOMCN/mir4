#pragma once
#include "CoreMinimal.h"
#include "GUIDE_EFFECT_APPLY_TYPE.generated.h"

UENUM(BlueprintType)
enum class GUIDE_EFFECT_APPLY_TYPE : uint8 {
    ForSelf,
    ForEnemy,
    ForAlly,
    ForAll,
};

