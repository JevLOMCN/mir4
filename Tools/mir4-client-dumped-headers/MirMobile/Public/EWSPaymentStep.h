#pragma once
#include "CoreMinimal.h"
#include "EWSPaymentStep.generated.h"

UENUM()
enum class EWSPaymentStep {
    NONE,
    STORE_PURCHASE_ERROR = 60,
    REQUEST_PAY_VERIFY = 101,
    RESPONSE_PAY_VERIFY = 201,
    UNKNOWN_RECEIPT = -1,
};

