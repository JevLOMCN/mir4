#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectFoldbackDistortionSettings.h"
#include "SourceEffectFoldbackDistortionPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectFoldbackDistortionSettings Settings;
    
    USourceEffectFoldbackDistortionPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectFoldbackDistortionSettings& InSettings);
    
};

