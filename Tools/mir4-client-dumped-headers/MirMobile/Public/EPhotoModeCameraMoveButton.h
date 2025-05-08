#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeCameraMoveButton.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeCameraMoveButton : uint8 {
    NONE,
    UP,
    LEFT,
    RIGHT = 4,
    DOWN = 8,
};

