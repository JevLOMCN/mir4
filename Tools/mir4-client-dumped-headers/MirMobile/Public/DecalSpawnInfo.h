#pragma once
#include "CoreMinimal.h"
#include "EffectSpawnInfo.h"
#include "DecalSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FDecalSpawnInfo : public FEffectSpawnInfo {
    GENERATED_BODY()
public:
    MIRMOBILE_API FDecalSpawnInfo();
};

