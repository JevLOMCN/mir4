#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBlendType.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneBlendType : uint8 {
    Invalid,
    Absolute,
    Additive,
    Relative = 4,
};

