#pragma once
#include "CoreMinimal.h"
#include "WEMIX_PARAM.generated.h"

UENUM(BlueprintType)
enum class WEMIX_PARAM : uint8 {
    contract = 1,
    amount,
    tokenID,
    itemURI,
    fee,
    id,
    user = 10,
    nonce,
    method,
};

