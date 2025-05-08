#pragma once
#include "CoreMinimal.h"
#include "EColorVisionDeficiency.generated.h"

UENUM(BlueprintType)
enum class EColorVisionDeficiency : uint8 {
    NormalVision,
    Deuteranope,
    Protanope,
    Tritanope,
};

