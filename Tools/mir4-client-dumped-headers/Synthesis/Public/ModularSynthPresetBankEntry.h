#pragma once
#include "CoreMinimal.h"
#include "ModularSynthPreset.h"
#include "ModularSynthPresetBankEntry.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FModularSynthPresetBankEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModularSynthPreset Preset;
    
    FModularSynthPresetBankEntry();
};

