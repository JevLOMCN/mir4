#pragma once
#include "CoreMinimal.h"
#include "ERingModulatorTypeSourceEffect.generated.h"

UENUM(BlueprintType)
enum class ERingModulatorTypeSourceEffect : uint8 {
    Sine,
    Saw,
    Triangle,
    Square,
    Count,
};

