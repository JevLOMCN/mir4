#pragma once
#include "CoreMinimal.h"
#include "FoliageVertexColorChannelMask.generated.h"

USTRUCT(BlueprintType)
struct FFoliageVertexColorChannelMask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseMask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InvertMask: 1;
    
    FOLIAGE_API FFoliageVertexColorChannelMask();
};

