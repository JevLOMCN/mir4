#pragma once
#include "CoreMinimal.h"
#include "LandscapeLayerStruct.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT(BlueprintType)
struct FLandscapeLayerStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfoObj;
    
    LANDSCAPE_API FLandscapeLayerStruct();
};

