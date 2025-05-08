#pragma once
#include "CoreMinimal.h"
#include "ENPCShopGoodsLimitType.generated.h"

UENUM(BlueprintType)
enum class ENPCShopGoodsLimitType : uint8 {
    None,
    Permanent,
    EveryDay,
    Weekend,
    Month,
};

