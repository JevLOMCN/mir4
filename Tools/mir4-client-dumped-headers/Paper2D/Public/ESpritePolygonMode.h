#pragma once
#include "CoreMinimal.h"
#include "ESpritePolygonMode.generated.h"

UENUM(BlueprintType)
namespace ESpritePolygonMode {
    enum Type {
        SourceBoundingBox,
        TightBoundingBox,
        ShrinkWrapped,
        FullyCustom,
        Diced,
    };
}

