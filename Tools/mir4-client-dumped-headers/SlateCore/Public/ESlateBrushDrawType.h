#pragma once
#include "CoreMinimal.h"
#include "ESlateBrushDrawType.generated.h"

UENUM(BlueprintType)
namespace ESlateBrushDrawType {
    enum Type {
        NoDrawType,
        Box,
        Border,
        Image,
    };
}

