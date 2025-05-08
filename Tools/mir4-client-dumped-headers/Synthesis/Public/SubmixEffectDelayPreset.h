#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectDelaySettings.h"
#include "SubmixEffectDelayPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USubmixEffectDelayPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectDelaySettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSubmixEffectDelaySettings DynamicSettings;
    
    USubmixEffectDelayPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectDelaySettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetDelay(float Length);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDelayInMilliseconds();
    
};

