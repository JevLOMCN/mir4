#pragma once
#include "CoreMinimal.h"
#include "HitPostProcessMaterialData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FHitPostProcessMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* pWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* pEffectUseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* pPowerCurve;
    
    MIRMOBILE_API FHitPostProcessMaterialData();
};

