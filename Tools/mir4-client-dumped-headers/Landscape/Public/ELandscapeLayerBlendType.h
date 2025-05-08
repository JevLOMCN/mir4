#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerBlendType.generated.h"

UENUM(BlueprintType)
enum ELandscapeLayerBlendType {
    LB_WeightBlend,
    LB_AlphaBlend,
    LB_HeightBlend,
};

