#pragma once
#include "CoreMinimal.h"
#include "EPositionType.generated.h"

UENUM(BlueprintType)
enum class EPositionType : uint8 {
    FREE,
    RELATIVE,
};

