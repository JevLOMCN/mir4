#pragma once
#include "CoreMinimal.h"
#include "ETextureRotationDirection.generated.h"

UENUM(BlueprintType)
enum class ETextureRotationDirection : uint8 {
    None,
    Left,
    Right,
    Down,
};

