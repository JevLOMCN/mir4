#pragma once
#include "CoreMinimal.h"
#include "UIParticleProperty.h"
#include "ScalarParamCurve.generated.h"

USTRUCT(BlueprintType)
struct FScalarParamCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScalarParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleProperty Value;
    
    UIPARTICLE_API FScalarParamCurve();
};

