#pragma once
#include "CoreMinimal.h"
#include "WEMIX_METHOD.generated.h"

UENUM(BlueprintType)
enum class WEMIX_METHOD : uint8 {
    NONE,
    exchangeToItem,
    exchangeToToken,
    seal,
    unseal,
    mint,
    compose,
    buyVitality,
    transactionSignature = 10,
};

