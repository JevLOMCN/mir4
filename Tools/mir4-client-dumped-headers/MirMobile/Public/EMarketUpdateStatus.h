#pragma once
#include "CoreMinimal.h"
#include "EMarketUpdateStatus.generated.h"

UENUM(BlueprintType)
enum class EMarketUpdateStatus : uint8 {
    NONE,
    UPDATE_SELECT,
    UPDATE_FORCE,
};

