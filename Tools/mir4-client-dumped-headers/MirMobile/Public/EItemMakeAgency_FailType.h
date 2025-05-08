#pragma once
#include "CoreMinimal.h"
#include "EItemMakeAgency_FailType.generated.h"

UENUM(BlueprintType)
enum class EItemMakeAgency_FailType : uint8 {
    NONE,
    COST,
    ITEM,
};

