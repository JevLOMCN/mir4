#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectSimpleDelaySettings.h"
#include "SourceEffectSimpleDelayPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectSimpleDelaySettings Settings;
    
    USourceEffectSimpleDelayPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectSimpleDelaySettings& InSettings);
    
};

