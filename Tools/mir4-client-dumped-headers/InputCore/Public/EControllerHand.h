#pragma once
#include "CoreMinimal.h"
#include "EControllerHand.generated.h"

UENUM(BlueprintType)
enum class EControllerHand : uint8 {
    Left,
    Right,
    AnyHand,
    Pad,
    ExternalCamera,
    Gun,
    Special_1,
    Special_2,
    Special_3,
    Special_4,
    Special_5,
    Special_6,
    Special_7,
    Special_8,
    Special_9,
    Special_10,
    Special_11,
    ControllerHand_Count,
};

