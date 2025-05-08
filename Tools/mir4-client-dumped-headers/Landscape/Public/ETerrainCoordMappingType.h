#pragma once
#include "CoreMinimal.h"
#include "ETerrainCoordMappingType.generated.h"

UENUM(BlueprintType)
enum ETerrainCoordMappingType {
    TCMT_Auto,
    TCMT_XY,
    TCMT_XZ,
    TCMT_YZ,
};

