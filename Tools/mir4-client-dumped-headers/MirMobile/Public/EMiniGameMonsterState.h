#pragma once
#include "CoreMinimal.h"
#include "EMiniGameMonsterState.generated.h"

UENUM(BlueprintType)
enum class EMiniGameMonsterState : uint8 {
    Idle,
    Run,
    Atk1,
    Atk2,
    Atk3,
    Hit,
    Die,
};

