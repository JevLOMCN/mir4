#pragma once
#include "CoreMinimal.h"
#include "ERingModulatorTypeSourceEffect.h"
#include "SourceEffectRingModulationSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectRingModulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERingModulatorTypeSourceEffect ModulatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetLevel;
    
    FSourceEffectRingModulationSettings();
};

