#pragma once
#include "CoreMinimal.h"
#include "EAutoQuestNormalState.generated.h"

UENUM(BlueprintType)
enum class EAutoQuestNormalState : uint8 {
    None,
    Running,
    Pause,
    Complete,
    Wait,
};

