#pragma once
#include "CoreMinimal.h"
#include "EIAPProductType.generated.h"

UENUM(BlueprintType)
enum class EIAPProductType : uint8 {
    SINGLE = 1,
    MULTIPLE,
    DRAGON_STEEL,
};

