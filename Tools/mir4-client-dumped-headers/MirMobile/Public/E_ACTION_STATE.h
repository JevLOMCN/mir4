#pragma once
#include "CoreMinimal.h"
#include "E_ACTION_STATE.generated.h"

UENUM(BlueprintType)
enum class E_ACTION_STATE : uint8 {
    None,
    Idle,
    Chase,
    Attack,
    Run,
    Move,
    Stop,
    Roam,
    Heal,
    Warp,
};

