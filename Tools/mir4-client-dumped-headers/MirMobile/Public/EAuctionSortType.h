#pragma once
#include "CoreMinimal.h"
#include "EAuctionSortType.generated.h"

UENUM(BlueprintType)
enum class EAuctionSortType : uint8 {
    EACH_PRICE,
    TOTAL_PRICE,
    WEAPON_PRICE,
};

