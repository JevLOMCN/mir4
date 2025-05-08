#pragma once
#include "CoreMinimal.h"
#include "EOccupationAuctionState.generated.h"

UENUM()
enum class EOccupationAuctionState {
    INIT = -1,
    NONE = 0,
    STANDBY_AUCTION,
    PROCEEDING_AUCTION,
    EXTEND_AUCTION,
    FAILURE_AUCTION,
    ALLIANCE_INVITE,
    STANDBY_BATTLE,
    START_BATTLE,
    END_BATTLE,
    CONTENTS_CLOSE,
};

