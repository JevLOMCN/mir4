#pragma once
#include "CoreMinimal.h"
#include "ERefundState.generated.h"

UENUM(BlueprintType)
enum class ERefundState : uint8 {
    REFUNDED = 1,
    REPAYMENT_COMPLETED,
};

