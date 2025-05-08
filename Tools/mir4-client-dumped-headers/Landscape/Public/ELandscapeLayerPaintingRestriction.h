#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerPaintingRestriction.generated.h"

UENUM(BlueprintType)
enum class ELandscapeLayerPaintingRestriction : uint8 {
    None,
    UseMaxLayers,
    ExistingOnly,
    UseComponentWhitelist,
};

