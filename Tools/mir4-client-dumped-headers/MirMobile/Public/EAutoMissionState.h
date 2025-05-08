#pragma once
#include "CoreMinimal.h"
#include "EAutoMissionState.generated.h"

UENUM(BlueprintType)
enum class EAutoMissionState : uint8 {
    None,
    Running,
};

