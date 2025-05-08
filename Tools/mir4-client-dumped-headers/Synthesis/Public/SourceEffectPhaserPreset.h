#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectPhaserSettings.h"
#include "SourceEffectPhaserPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectPhaserPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectPhaserSettings Settings;
    
    USourceEffectPhaserPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectPhaserSettings& InSettings);
    
};

