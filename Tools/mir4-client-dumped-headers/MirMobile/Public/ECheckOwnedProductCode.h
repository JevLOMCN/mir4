#pragma once
#include "CoreMinimal.h"
#include "ECheckOwnedProductCode.generated.h"

UENUM()
enum class ECheckOwnedProductCode {
    NONE = -1,
    EMPTY_RECEIPT = 0,
    EMPTY_PAY_ID,
    REQUEST_PURCHASE_VERIFY,
    REQUEST_PURCHASE_VERIFY_RECEIPT_DUPLICATED,
    INVALID_PURCHASE,
};

