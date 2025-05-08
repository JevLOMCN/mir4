#pragma once
#include "CoreMinimal.h"
#include "WeightmapLayerAllocationInfo.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT(BlueprintType)
struct FWeightmapLayerAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WeightmapTextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 WeightmapTextureChannel;
    
    LANDSCAPE_API FWeightmapLayerAllocationInfo();
};

