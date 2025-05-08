#pragma once
#include "CoreMinimal.h"
#include "EMiniGamePlayerState.generated.h"

UENUM(BlueprintType)
enum class EMiniGamePlayerState : uint8 {
    Idle,
    Run,
    Atk1,
    Atk2,
    Atk3,
    Hit,
    Avoid,
    Stu,
};

