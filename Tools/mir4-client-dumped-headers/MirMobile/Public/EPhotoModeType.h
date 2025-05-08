#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeType.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeType : uint8 {
    None,
    Pose,
    Filter,
    DepthOfField,
    FieldOfView,
    Brightness,
    LogoImage,
    LookAt,
    Option,
    Exit,
};

