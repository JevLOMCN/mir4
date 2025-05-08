#pragma once
#include "CoreMinimal.h"
#include "ESpriteCollisionMode.generated.h"

UENUM(BlueprintType)
namespace ESpriteCollisionMode {
    enum Type {
        None,
        Use2DPhysics,
        Use3DPhysics,
    };
}

