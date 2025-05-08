#pragma once
#include "CoreMinimal.h"
#include "DISTANCE_TYPE.generated.h"

UENUM(BlueprintType)
enum class DISTANCE_TYPE : uint8 {
    None,
    Aggro,
    Near,
    Far,
    Random,
};

