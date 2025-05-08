#pragma once
#include "CoreMinimal.h"
#include "ESlateBrushImageType.generated.h"

UENUM(BlueprintType)
namespace ESlateBrushImageType {
    enum Type {
        NoImage,
        FullColor,
        Linear,
    };
}

