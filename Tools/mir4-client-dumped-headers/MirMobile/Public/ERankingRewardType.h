#pragma once
#include "CoreMinimal.h"
#include "ERankingRewardType.generated.h"

UENUM(BlueprintType)
enum class ERankingRewardType : uint8 {
    Daily,
    Weekly,
    Season,
};

