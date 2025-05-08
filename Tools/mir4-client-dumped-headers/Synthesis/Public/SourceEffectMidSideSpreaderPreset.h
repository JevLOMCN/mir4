#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectMidSideSpreaderSettings.h"
#include "SourceEffectMidSideSpreaderPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectMidSideSpreaderSettings Settings;
    
    USourceEffectMidSideSpreaderPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectMidSideSpreaderSettings& InSettings);
    
};

