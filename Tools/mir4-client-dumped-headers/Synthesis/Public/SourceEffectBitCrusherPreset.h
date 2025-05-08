#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectBitCrusherSettings.h"
#include "SourceEffectBitCrusherPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectBitCrusherPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectBitCrusherSettings Settings;
    
    USourceEffectBitCrusherPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectBitCrusherSettings& InSettings);
    
};

