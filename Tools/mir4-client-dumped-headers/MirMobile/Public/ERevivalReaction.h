#pragma once
#include "CoreMinimal.h"
#include "ERevivalReaction.generated.h"

UENUM(BlueprintType)
enum class ERevivalReaction : uint8 {
    NONE,
    EXCUTE_HELP_REVIVAL,
    EXCUTE_SAFE_REVIVAL,
    EXCUTE_IMMEDIATE_REVIVAL = 4,
    EXCUTE_REVIVAL_FREE = 8,
    OPEN_CONTENTS = NONE,
};

