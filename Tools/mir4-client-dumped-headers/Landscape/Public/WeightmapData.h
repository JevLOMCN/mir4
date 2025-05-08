#pragma once
#include "CoreMinimal.h"
#include "WeightmapLayerAllocationInfo.h"
#include "WeightmapData.generated.h"

class ULandscapeWeightmapUsage;
class UTexture2D;

USTRUCT(BlueprintType)
struct FWeightmapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeWeightmapUsage*> TextureUsages;
    
    LANDSCAPE_API FWeightmapData();
};

