#pragma once
#include "CoreMinimal.h"
#include "EIAPState.generated.h"

UENUM(BlueprintType)
enum class EIAPState : uint8 {
    NONE,
    PRODUCT_DETAILS,
    PURCHASING,
    PAY_START,
    PAY_VERIFY,
    CONSUME_PRODUCT,
};

