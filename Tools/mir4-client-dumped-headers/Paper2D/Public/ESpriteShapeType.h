#pragma once
#include "CoreMinimal.h"
#include "ESpriteShapeType.generated.h"

UENUM(BlueprintType)
enum class ESpriteShapeType : uint8 {
    Box,
    Circle,
    Polygon,
};

