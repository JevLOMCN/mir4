#pragma once
#include "CoreMinimal.h"
#include "BTNACTION_INDEX.generated.h"

UENUM(BlueprintType)
enum class BTNACTION_INDEX : uint8 {
    BUTTON_DISABLE,
    BUTTON_ENABLE,
    MAX_INDEX,
};

