#pragma once
#include "CoreMinimal.h"
#include "ECommonBtnType.generated.h"

UENUM(BlueprintType)
enum class ECommonBtnType : uint8 {
    None,
    MAIN_PRACTICE_1 = 15,
    MAIN_PRACTICE_2,
    SUB_POSITIVE = 20,
    SUB_NEGATIVE,
    SUB_PRACTICE_1,
    SUB_PRACTICE_2,
    SUB_UNSEAL,
    OTHER_RECT_1,
    OTHER_RECT_2,
    OTHER_CIRCLE_1 = 30,
    OTHER_CIRCLE_2,
    OTHER_ROUND_1 = 35,
    PARTY_1,
    SUB_POSITIVE_GLOW = 100,
    SUB_POSITIVE_GOLD,
};

