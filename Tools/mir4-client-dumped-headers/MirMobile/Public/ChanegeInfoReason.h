#pragma once
#include "CoreMinimal.h"
#include "ChanegeInfoReason.generated.h"

UENUM(BlueprintType)
enum class ChanegeInfoReason : uint8 {
    Sync,
    AutoRecovery,
    Buff,
    Skill,
};

