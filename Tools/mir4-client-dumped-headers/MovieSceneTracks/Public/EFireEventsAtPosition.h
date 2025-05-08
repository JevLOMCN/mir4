#pragma once
#include "CoreMinimal.h"
#include "EFireEventsAtPosition.generated.h"

UENUM(BlueprintType)
enum class EFireEventsAtPosition : uint8 {
    AtStartOfEvaluation,
    AtEndOfEvaluation,
    AfterSpawn,
};

