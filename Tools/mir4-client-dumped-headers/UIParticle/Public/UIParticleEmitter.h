#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnEasyParticleEndEventDelegate.h"
#include "UIParticleEmitter.generated.h"

class UUIParticleEmitterAsset;

UCLASS(Blueprintable)
class UIPARTICLE_API UUIParticleEmitter : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIParticleEmitterAsset* Asset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEasyParticleEndEvent EventOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayParticle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UUIParticleEmitter();

    UFUNCTION(BlueprintCallable)
    void StopEmit();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayParticle(bool InPlayParticle);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
};

