#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectFlexiverbSettings.h"
#include "SubmixEffectFlexiverbPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectFlexiverbSettings Settings;
    
    USubmixEffectFlexiverbPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectFlexiverbSettings& InSettings);
    
};

