#pragma once
#include "CoreMinimal.h"
#include "EUserEventRewardType.generated.h"

UENUM(BlueprintType)
enum class EUserEventRewardType : uint8 {
    RewardType_Money = 1,
    RewardType_Item,
};

