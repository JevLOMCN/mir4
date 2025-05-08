#pragma once
#include "CoreMinimal.h"
#include "EBeaconConnectionState.generated.h"

UENUM(BlueprintType)
enum class EBeaconConnectionState : uint8 {
    Invalid,
    Closed,
    Pending,
    Open,
};

