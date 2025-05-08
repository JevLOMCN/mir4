#pragma once
#include "CoreMinimal.h"
#include "EARDepthQuality.generated.h"

UENUM(BlueprintType)
enum class EARDepthQuality : uint8 {
    Unkown,
    Low,
    High,
};

