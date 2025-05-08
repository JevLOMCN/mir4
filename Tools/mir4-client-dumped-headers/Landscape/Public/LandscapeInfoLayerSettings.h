#pragma once
#include "CoreMinimal.h"
#include "LandscapeInfoLayerSettings.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT(BlueprintType)
struct FLandscapeInfoLayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfoObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    LANDSCAPE_API FLandscapeInfoLayerSettings();
};

