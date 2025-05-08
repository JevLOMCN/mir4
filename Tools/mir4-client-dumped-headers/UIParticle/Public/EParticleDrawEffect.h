#pragma once
#include "CoreMinimal.h"
#include "EParticleDrawEffect.generated.h"

UENUM(BlueprintType)
enum class EParticleDrawEffect : uint8 {
    None,
    NoBlending,
    PreMultipliedAlpha,
    NoGamma = 4,
    InvertAlpha = 8,
    NoPixelSnapping = 16,
    DisabledEffect = 32,
    IgnoreTextureAlpha = 64,
    ReverseGamma = 128,
};

