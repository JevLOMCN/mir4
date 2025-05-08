#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectReverbFastSettings.h"
#include "SubmixEffectReverbFastPreset.generated.h"

class UReverbEffect;

UCLASS(Blueprintable, EditInlineNew)
class AUDIOMIXER_API USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectReverbFastSettings Settings;
    
    USubmixEffectReverbFastPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettingsWithReverbEffect(const UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectReverbFastSettings& InSettings);
    
};

