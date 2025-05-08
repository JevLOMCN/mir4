#pragma once
#include "CoreMinimal.h"
#include "ACT_TYPE.generated.h"

UENUM(BlueprintType)
enum class ACT_TYPE : uint8 {
    None,
    TargetAct,
    ZoneAct,
};

