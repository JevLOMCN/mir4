#pragma once
#include "CoreMinimal.h"
#include "EPrerequisiteLoadState.generated.h"

UENUM()
enum class EPrerequisiteLoadState : int32 {
    START,
    ALL_TABLE = START,
    ASYNC_PRELOAD_TABLE,
    PREREQUISITE_ASSET,
    MAX,
};

