#pragma once
#include "CoreMinimal.h"
#include "EHolyStuffAnimType.generated.h"

UENUM(BlueprintType)
enum class EHolyStuffAnimType : uint8 {
    UNOPEN,
    OPENING,
    IDLE,
    UPGRADE,
};

