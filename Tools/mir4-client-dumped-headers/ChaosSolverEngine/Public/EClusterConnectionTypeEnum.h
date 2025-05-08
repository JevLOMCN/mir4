#pragma once
#include "CoreMinimal.h"
#include "EClusterConnectionTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EClusterConnectionTypeEnum : uint8 {
    Chaos_PointImplicit = 1,
    Chaos_DelaunayTriangulation,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay,
    Chaos_None = 0,
    Chaos_EClsuterCreationParameters_Max = Chaos_PointImplicit UMETA(Hidden),
};

