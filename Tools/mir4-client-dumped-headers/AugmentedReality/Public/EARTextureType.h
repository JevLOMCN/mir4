#pragma once
#include "CoreMinimal.h"
#include "EARTextureType.generated.h"

UENUM(BlueprintType)
enum class EARTextureType : uint8 {
    CameraImage,
    CameraDepth,
    EnvironmentCapture,
};

