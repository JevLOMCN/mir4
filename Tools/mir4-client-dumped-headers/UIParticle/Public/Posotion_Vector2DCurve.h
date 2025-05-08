#pragma once
#include "CoreMinimal.h"
#include "UIParticleProperty.h"
#include "Posotion_Vector2DCurve.generated.h"

USTRUCT(BlueprintType)
struct FPosotion_Vector2DCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleProperty X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleProperty Y;
    
    UIPARTICLE_API FPosotion_Vector2DCurve();
};

