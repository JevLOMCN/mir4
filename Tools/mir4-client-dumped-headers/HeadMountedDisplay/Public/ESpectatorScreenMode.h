#pragma once
#include "CoreMinimal.h"
#include "ESpectatorScreenMode.generated.h"

UENUM(BlueprintType)
enum class ESpectatorScreenMode : uint8 {
    Disabled,
    SingleEyeLetterboxed,
    Undistorted,
    Distorted,
    SingleEye,
    SingleEyeCroppedToFill,
    Texture,
    TexturePlusEye,
};

