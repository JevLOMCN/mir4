#pragma once
#include "CoreMinimal.h"
#include "EGachaBoxType.generated.h"

UENUM(BlueprintType)
enum class EGachaBoxType : uint8 {
    NONE,
    PET,
    SKILLBOOK,
    ITEM,
    ITEM_2,
};

