#pragma once
#include "CoreMinimal.h"
#include "ERevivalExceptionType.generated.h"

UENUM(BlueprintType)
enum class ERevivalExceptionType : uint8 {
    NONE,
    CINEMATIC,
    DUNGEON_REWARD,
    SLEEP_MODE = 4,
    SIEGE_SITUATION_BOARD = 8,
    SIEGE_BATTLERESULT = 16,
};

