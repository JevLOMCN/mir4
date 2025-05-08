#pragma once
#include "CoreMinimal.h"
#include "EAuctionTabType.generated.h"

UENUM()
enum class EAuctionTabType : int8 {
    None = -1,
    Search = 0,
    Sale,
    Calculate,
    History,
    BuyHistory,
    Max,
};

