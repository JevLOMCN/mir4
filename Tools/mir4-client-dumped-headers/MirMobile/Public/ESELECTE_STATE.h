#pragma once
#include "CoreMinimal.h"
#include "ESELECTE_STATE.generated.h"

UENUM(BlueprintType)
enum class ESELECTE_STATE : uint8 {
    NONE,
    SELECTTING,
    SELECTED,
};

