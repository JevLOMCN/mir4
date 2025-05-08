#pragma once
#include "CoreMinimal.h"
#include "ERBFDistanceMethod.generated.h"

UENUM(BlueprintType)
enum class ERBFDistanceMethod : uint8 {
    Euclidean,
    Quaternion,
    SwingAngle,
    DefaultMethod,
};

