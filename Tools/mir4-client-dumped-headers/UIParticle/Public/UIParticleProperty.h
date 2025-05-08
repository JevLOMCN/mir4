#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EUIParticlePropertyType.h"
#include "Range_Float.h"
#include "Range_FloatCurve.h"
#include "Range_LinearColorCurve.h"
#include "Range_Vector2D.h"
#include "UIParticleFloatCurve.h"
#include "UIParticleLinearColorCurve.h"
#include "UIParticleProperty.generated.h"

USTRUCT(BlueprintType)
struct FUIParticleProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIParticlePropertyType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRange_Float FloatRangeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleFloatCurve FloatCurveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRange_FloatCurve FloatCurveRangeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Vector2DValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRange_Vector2D Vector2DRangeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIParticleLinearColorCurve LinearColorCurveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRange_LinearColorCurve LinearColorCurveRangeValue;
    
    UIPARTICLE_API FUIParticleProperty();
};

