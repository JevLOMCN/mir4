#pragma once
#include "CoreMinimal.h"
#include "EGameOptionDataType.generated.h"

UENUM(BlueprintType)
enum class EGameOptionDataType : uint8 {
    DEVICE = 1,
    CHARACTER,
    DEFAULT,
};

