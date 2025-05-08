#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectChorusSettings.h"
#include "SourceEffectChorusPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectChorusPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectChorusSettings Settings;
    
    USourceEffectChorusPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectChorusSettings& InSettings);
    
};

