#pragma once
#include "CoreMinimal.h"
#include "ERideState.generated.h"

UENUM(BlueprintType)
enum class ERideState : uint8 {
    None,
    Pending,
    Complete,
};

