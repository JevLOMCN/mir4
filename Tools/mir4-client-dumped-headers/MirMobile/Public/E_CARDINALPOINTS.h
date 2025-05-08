#pragma once
#include "CoreMinimal.h"
#include "E_CARDINALPOINTS.generated.h"

UENUM(BlueprintType)
enum class E_CARDINALPOINTS : uint8 {
    None,
    RightSide,
    LeftSide,
    RearSide,
    FrontSide,
};

