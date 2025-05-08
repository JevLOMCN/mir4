#pragma once
#include "CoreMinimal.h"
#include "EUserGaugeState.generated.h"

UENUM(BlueprintType)
enum class EUserGaugeState : uint8 {
    Same,
    Increase,
    Decrease,
};

