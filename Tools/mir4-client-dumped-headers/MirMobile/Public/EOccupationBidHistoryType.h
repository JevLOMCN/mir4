#pragma once
#include "CoreMinimal.h"
#include "EOccupationBidHistoryType.generated.h"

UENUM(BlueprintType)
enum class EOccupationBidHistoryType : uint8 {
    NONE,
    BIDDING,
    OCCUPIED,
    BATTLE_RESULT,
};

