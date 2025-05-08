#pragma once
#include "CoreMinimal.h"
#include "EComputeNTBsOptions.generated.h"

UENUM(BlueprintType)
enum class EComputeNTBsOptions : uint8 {
    None,
    Normals,
    Tangents,
    WeightedNTBs = 4,
};

