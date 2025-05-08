#pragma once
#include "CoreMinimal.h"
#include "UIParticleProperty.h"
#include "Size_Vector2DCurve.generated.h"

USTRUCT(BlueprintType)
struct FSize_Vector2DCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleProperty Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleProperty Max;
    
    UIPARTICLE_API FSize_Vector2DCurve();
};

