#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectDynamicsProcessorType.generated.h"

UENUM(BlueprintType)
enum class ESubmixEffectDynamicsProcessorType : uint8 {
    Compressor,
    Limiter,
    Expander,
    Gate,
    Count,
};

