#pragma once
#include "CoreMinimal.h"
#include "EOccupationAuctionButtonType.generated.h"

UENUM(BlueprintType)
enum class EOccupationAuctionButtonType : uint8 {
    NONE,
    AUCTION_BIDDING,
    ALLIANCE_INVITE,
    START_BATTLE,
};

