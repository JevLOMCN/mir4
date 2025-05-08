#pragma once
#include "CoreMinimal.h"
#include "EGeometryCollectionDebugDrawActorHideGeometry.generated.h"

UENUM(BlueprintType)
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8 {
    HideNone,
    HideWithCollision,
    HideSelected,
    HideWholeCollection,
    HideAll,
};

