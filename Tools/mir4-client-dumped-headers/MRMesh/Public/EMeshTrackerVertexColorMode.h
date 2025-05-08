#pragma once
#include "CoreMinimal.h"
#include "EMeshTrackerVertexColorMode.generated.h"

UENUM(BlueprintType)
enum class EMeshTrackerVertexColorMode : uint8 {
    None,
    Confidence,
    Block,
};

