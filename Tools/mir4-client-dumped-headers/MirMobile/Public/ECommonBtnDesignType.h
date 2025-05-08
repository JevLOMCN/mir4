#pragma once
#include "CoreMinimal.h"
#include "ECommonBtnDesignType.generated.h"

UENUM(BlueprintType)
enum class ECommonBtnDesignType : uint8 {
    NONE,
    MAIN,
    SUB,
    RECT,
    CIRCLE,
    ROUND,
};

