#pragma once
#include "CoreMinimal.h"
#include "ESlateBrushTileType.generated.h"

UENUM(BlueprintType)
namespace ESlateBrushTileType {
    enum Type {
        NoTile,
        Horizontal,
        Vertical,
        Both,
    };
}

