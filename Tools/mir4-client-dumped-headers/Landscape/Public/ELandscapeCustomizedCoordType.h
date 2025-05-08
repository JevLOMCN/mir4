#pragma once
#include "CoreMinimal.h"
#include "ELandscapeCustomizedCoordType.generated.h"

UENUM(BlueprintType)
enum ELandscapeCustomizedCoordType {
    LCCT_None,
    LCCT_CustomUV0,
    LCCT_CustomUV1,
    LCCT_CustomUV2,
    LCCT_WeightMapUV,
};

