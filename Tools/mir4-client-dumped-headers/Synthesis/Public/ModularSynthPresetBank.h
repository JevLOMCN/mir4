#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModularSynthPresetBankEntry.h"
#include "ModularSynthPresetBank.generated.h"

UCLASS(Blueprintable)
class SYNTHESIS_API UModularSynthPresetBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModularSynthPresetBankEntry> Presets;
    
    UModularSynthPresetBank();

};

