#pragma once
#include "CoreMinimal.h"
#include "EQueryReceiptEntryCode.generated.h"

UENUM(BlueprintType)
enum class EQueryReceiptEntryCode : uint8 {
    INITED,
    LOAD_STREAM_LEVEL_END_PROCESS,
    UNEXPECTED_PURCHASE_RECEIPT,
    UPDATE_UNEXPECTED_PURCHASE_RECEIPT,
    RECONNECTED_GAME_SERVER,
    APP_RESUMED,
    REFUNDING_USER,
    PURCHASE_FAILED,
};

