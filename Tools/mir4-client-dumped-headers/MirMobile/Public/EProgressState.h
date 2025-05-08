#pragma once
#include "CoreMinimal.h"
#include "EProgressState.generated.h"

UENUM(BlueprintType)
enum class EProgressState : uint8 {
    Same,
    Increase,
    Decrease,
};

