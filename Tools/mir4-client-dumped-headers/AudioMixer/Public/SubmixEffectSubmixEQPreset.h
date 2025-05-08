#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectSubmixEQSettings.h"
#include "SubmixEffectSubmixEQPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOMIXER_API USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectSubmixEQSettings Settings;
    
    USubmixEffectSubmixEQPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
    
};

