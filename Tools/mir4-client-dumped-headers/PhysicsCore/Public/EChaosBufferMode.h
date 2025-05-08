#pragma once
#include "CoreMinimal.h"
#include "EChaosBufferMode.generated.h"

UENUM(BlueprintType)
enum class EChaosBufferMode : uint8 {
    Double,
    Triple,
    Num,
    Invalid,
};

