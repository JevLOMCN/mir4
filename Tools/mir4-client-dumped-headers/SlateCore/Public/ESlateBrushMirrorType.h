#pragma once
#include "CoreMinimal.h"
#include "ESlateBrushMirrorType.generated.h"

UENUM(BlueprintType)
namespace ESlateBrushMirrorType {
    enum Type {
        NoMirror,
        Horizontal,
        Vertical,
        Both,
    };
}

