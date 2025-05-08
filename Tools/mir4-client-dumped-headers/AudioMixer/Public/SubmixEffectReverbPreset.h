#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectReverbSettings.h"
#include "SubmixEffectReverbPreset.generated.h"

class UReverbEffect;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOMIXER_API USubmixEffectReverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectReverbSettings Settings;
    
    USubmixEffectReverbPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettingsWithReverbEffect(const UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectReverbSettings& InSettings);
    
};

