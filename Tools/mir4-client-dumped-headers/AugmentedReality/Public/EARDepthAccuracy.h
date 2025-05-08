#pragma once
#include "CoreMinimal.h"
#include "EARDepthAccuracy.generated.h"

UENUM(BlueprintType)
enum class EARDepthAccuracy : uint8 {
    Unkown,
    Approximate,
    Accurate,
};

