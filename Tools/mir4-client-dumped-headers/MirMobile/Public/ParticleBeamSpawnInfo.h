#pragma once
#include "CoreMinimal.h"
#include "EffectSpawnInfo.h"
#include "ParticleBeamSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FParticleBeamSpawnInfo : public FEffectSpawnInfo {
    GENERATED_BODY()
public:
    MIRMOBILE_API FParticleBeamSpawnInfo();
};

