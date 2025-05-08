#pragma once
#include "CoreMinimal.h"
#include "HeightState.generated.h"

UENUM(BlueprintType)
enum class HeightState : uint8 {
    None,
    Airwalk,
    CliffMove,
    RideMonster,
};

