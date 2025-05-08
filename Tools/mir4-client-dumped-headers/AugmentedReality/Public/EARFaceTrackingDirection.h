#pragma once
#include "CoreMinimal.h"
#include "EARFaceTrackingDirection.generated.h"

UENUM(BlueprintType)
enum class EARFaceTrackingDirection : uint8 {
    FaceRelative,
    FaceMirrored,
};

