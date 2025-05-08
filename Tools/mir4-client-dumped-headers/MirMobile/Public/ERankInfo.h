#pragma once
#include "CoreMinimal.h"
#include "ERankInfo.generated.h"

UENUM(BlueprintType)
enum class ERankInfo : uint8 {
    RANK_LEVEL,
    RANK_COMBAT,
    RANK_COLLECTION,
    RANK_GUILD,
};

