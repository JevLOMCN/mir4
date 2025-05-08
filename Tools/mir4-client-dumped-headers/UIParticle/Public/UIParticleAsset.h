#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UIParticleEmitterInfo.h"
#include "UIParticleAsset.generated.h"

UCLASS(Blueprintable)
class UIPARTICLE_API UUIParticleAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIParticleEmitterInfo> Emitters;
    
    UUIParticleAsset();

};

