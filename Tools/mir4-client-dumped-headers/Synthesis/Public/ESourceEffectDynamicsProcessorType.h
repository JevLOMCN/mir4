#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectDynamicsProcessorType.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectDynamicsProcessorType : uint8 {
    Compressor,
    Limiter,
    Expander,
    Gate,
    Count,
};

