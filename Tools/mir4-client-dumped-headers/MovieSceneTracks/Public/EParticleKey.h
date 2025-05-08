#pragma once
#include "CoreMinimal.h"
#include "EParticleKey.generated.h"

UENUM(BlueprintType)
enum class EParticleKey : uint8 {
    Activate,
    Deactivate,
    Trigger,
};

