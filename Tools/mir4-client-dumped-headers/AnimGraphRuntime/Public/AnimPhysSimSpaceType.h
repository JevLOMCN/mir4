#pragma once
#include "CoreMinimal.h"
#include "AnimPhysSimSpaceType.generated.h"

UENUM(BlueprintType)
enum class AnimPhysSimSpaceType : uint8 {
    Component,
    Actor,
    World,
    RootRelative,
    BoneRelative,
};

