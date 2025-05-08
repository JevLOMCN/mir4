#pragma once
#include "CoreMinimal.h"
#include "HeightmapData.h"
#include "WeightmapData.h"
#include "LandscapeLayerComponentData.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeLayerComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeightmapData HeightmapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeightmapData WeightmapData;
    
    LANDSCAPE_API FLandscapeLayerComponentData();
};

