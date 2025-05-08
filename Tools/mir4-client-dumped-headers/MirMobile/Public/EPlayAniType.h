#pragma once
#include "CoreMinimal.h"
#include "EPlayAniType.generated.h"

UENUM(BlueprintType)
enum class EPlayAniType : uint8 {
    NONE,
    MOVING,
    FIRST,
    SECOND,
    IDLE,
};

