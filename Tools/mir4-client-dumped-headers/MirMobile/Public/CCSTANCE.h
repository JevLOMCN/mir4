#pragma once
#include "CoreMinimal.h"
#include "CCSTANCE.generated.h"

UENUM(BlueprintType)
enum class CCSTANCE : uint8 {
    None,
    Hit01 = 11,
    Hit02,
    Hit03,
    Stu01 = 21,
    Down01 = 31,
    Down02,
    Down03,
    HOV01 = 41,
    Air01 = 51,
    StateEnd = 250,
};

