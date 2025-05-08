#pragma once
#include "CoreMinimal.h"
#include "EAITaskPriority.generated.h"

UENUM(BlueprintType)
enum class EAITaskPriority : uint8 {
    Lowest,
    Low = 64,
    AutonomousAI = 127,
    High = 192,
    Ultimate = 254,
};

