#pragma once
#include "CoreMinimal.h"
#include "EARSessionType.generated.h"

UENUM(BlueprintType)
enum class EARSessionType : uint8 {
    None,
    Orientation,
    World,
    Face,
    Image,
    ObjectScanning,
    PoseTracking,
};

