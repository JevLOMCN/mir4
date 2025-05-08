#pragma once
#include "CoreMinimal.h"
#include "EGameplayTaskState.generated.h"

UENUM(BlueprintType)
enum class EGameplayTaskState : uint8 {
    Uninitialized,
    AwaitingActivation,
    Paused,
    Active,
    Finished,
};

