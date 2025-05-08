#pragma once
#include "CoreMinimal.h"
#include "EProgressGuageState.generated.h"

UENUM(BlueprintType)
enum class EProgressGuageState : uint8 {
    Same,
    Increase,
    Decrease,
};

