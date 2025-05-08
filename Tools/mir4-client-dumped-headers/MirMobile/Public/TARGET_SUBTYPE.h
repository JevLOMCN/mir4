#pragma once
#include "CoreMinimal.h"
#include "TARGET_SUBTYPE.generated.h"

UENUM(BlueprintType)
enum class TARGET_SUBTYPE : uint8 {
    AliveOnly,
    DeadOnly,
    All,
};

