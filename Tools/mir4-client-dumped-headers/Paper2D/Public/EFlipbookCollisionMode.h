#pragma once
#include "CoreMinimal.h"
#include "EFlipbookCollisionMode.generated.h"

UENUM(BlueprintType)
namespace EFlipbookCollisionMode {
    enum Type {
        NoCollision,
        FirstFrameCollision,
        EachFrameCollision,
    };
}

