#pragma once
#include "CoreMinimal.h"
#include "ARTexture.h"
#include "EARDepthAccuracy.h"
#include "EARDepthQuality.h"
#include "ARTextureCameraDepth.generated.h"

UCLASS(Abstract, Blueprintable)
class AUGMENTEDREALITY_API UARTextureCameraDepth : public UARTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARDepthQuality DepthQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARDepthAccuracy DepthAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTemporallySmoothed;
    
    UARTextureCameraDepth();

};

