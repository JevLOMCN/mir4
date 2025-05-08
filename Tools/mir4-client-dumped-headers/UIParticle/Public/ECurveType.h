#pragma once
#include "CoreMinimal.h"
#include "ECurveType.generated.h"

UENUM(BlueprintType)
enum class ECurveType : uint8 {
    ParticleLifePercent,
    ParticleLifeTime,
    EmitLifeTime,
};

