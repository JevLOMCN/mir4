#pragma once
#include "CoreMinimal.h"
#include "ESlotEmptyType.generated.h"

UENUM(BlueprintType)
enum class ESlotEmptyType : uint8 {
    NONE,
    DEFAULT_BG,
    COLLAPSED,
    DUMMY,
};

