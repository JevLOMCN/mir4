#pragma once
#include "CoreMinimal.h"
#include "ERecvOccupationAuction.generated.h"

UENUM(BlueprintType)
enum class ERecvOccupationAuction : uint8 {
    RECV_OCCUPATION_INFO = 1,
    RECV_OCCUPATION_AUCTION_BIDDING,
    RECV_OCCUPATION_BATTLE_STATUS,
    RECV_OCCUPATION_ALLIANCE_INVITE_LIST,
    RECV_OCCUPATION_ALLIANCE_INVITE,
};

