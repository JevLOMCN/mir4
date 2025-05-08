#pragma once
#include "CoreMinimal.h"
#include "EffectSpawnInfo.h"
#include "ParticleSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FParticleSpawnInfo : public FEffectSpawnInfo {
    GENERATED_BODY()
public:
    MIRMOBILE_API FParticleSpawnInfo();
};

