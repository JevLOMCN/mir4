#pragma once
#include "CoreMinimal.h"
#include "EOccupationAuctionProgress.generated.h"

UENUM()
enum class EOccupationAuctionProgress : int32 {
    NONE,
    AUCTION_ENTRY,
    AUCTION_EXTEND,
    STANDBY_BATTLE,
    START_BATTLE,
    END,
    MAX,
};

