#pragma once
#include "CoreMinimal.h"
#include "EDragPosType.generated.h"

UENUM(BlueprintType)
enum class EDragPosType : uint8 {
    DELTA_TYPE,
    POSITION_TYPE,
};

