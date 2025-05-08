#pragma once
#include "CoreMinimal.h"
#include "ECameraModeType.generated.h"

UENUM(BlueprintType)
enum class ECameraModeType : uint8 {
    FIELD_AUTO,
    FIELD_QUATERVIEW,
    MANUAL_CONTROL,
    CAMERASET,
    NPCDIALOGUE,
    MONSTERSKILL,
    LOCKON_TARGET,
};

