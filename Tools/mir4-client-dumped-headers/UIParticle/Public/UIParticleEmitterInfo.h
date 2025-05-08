#pragma once
#include "CoreMinimal.h"
#include "UIParticleEmitterInfo.generated.h"

class UUIParticleEmitterAsset;

USTRUCT(BlueprintType)
struct FUIParticleEmitterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIParticleEmitterAsset* Asset;
    
    UIPARTICLE_API FUIParticleEmitterInfo();
};

