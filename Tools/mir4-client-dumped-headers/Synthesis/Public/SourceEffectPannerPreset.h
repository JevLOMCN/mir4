#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectPannerSettings.h"
#include "SourceEffectPannerPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectPannerPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectPannerSettings Settings;
    
    USourceEffectPannerPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectPannerSettings& InSettings);
    
};

