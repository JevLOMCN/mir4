#pragma once
#include "CoreMinimal.h"
#include "SourceEffectEQBand.h"
#include "SourceEffectEQSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectEQSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSourceEffectEQBand> EQBands;
    
    FSourceEffectEQSettings();
};

