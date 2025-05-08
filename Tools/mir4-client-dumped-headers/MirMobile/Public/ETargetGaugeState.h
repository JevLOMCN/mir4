#pragma once
#include "CoreMinimal.h"
#include "ETargetGaugeState.generated.h"

UENUM(BlueprintType)
enum class ETargetGaugeState : uint8 {
    Same,
    Increase,
    Decrease,
};

