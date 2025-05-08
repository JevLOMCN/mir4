#pragma once
#include "CoreMinimal.h"
#include "ERevivalOptionType.generated.h"

UENUM(BlueprintType)
enum class ERevivalOptionType : uint8 {
    NONE,
    SAFE_REVIVAL,
    IMMEDIATE_REVIVAL,
    HELP_REVIVAL = 4,
    ANOTHER_POSITION_REVIVAL = 8,
    MOVE_REVIVAL_ROOM = 16,
    NEED_HEART = 32,
    PK_PENALTY = 64,
    SITUATION_BOARD = 128,
};

