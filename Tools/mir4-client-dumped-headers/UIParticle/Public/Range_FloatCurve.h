#pragma once
#include "CoreMinimal.h"
#include "UIParticleFloatCurve.h"
#include "Range_FloatCurve.generated.h"

USTRUCT(BlueprintType)
struct FRange_FloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleFloatCurve Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleFloatCurve Max;
    
    UIPARTICLE_API FRange_FloatCurve();
};

