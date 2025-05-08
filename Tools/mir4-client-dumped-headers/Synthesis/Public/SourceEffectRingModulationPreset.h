#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectRingModulationSettings.h"
#include "SourceEffectRingModulationPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectRingModulationPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectRingModulationSettings Settings;
    
    USourceEffectRingModulationPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectRingModulationSettings& InSettings);
    
};

