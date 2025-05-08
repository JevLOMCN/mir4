#pragma once
#include "CoreMinimal.h"
#include "EPolygonEdgeHardness.generated.h"

UENUM(BlueprintType)
enum class EPolygonEdgeHardness : uint8 {
    NewEdgesSoft,
    NewEdgesHard,
    AllEdgesSoft,
    AllEdgesHard,
};

