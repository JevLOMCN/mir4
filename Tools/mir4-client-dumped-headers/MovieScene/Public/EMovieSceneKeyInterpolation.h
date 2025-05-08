#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneKeyInterpolation.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneKeyInterpolation : uint8 {
    Auto,
    User,
    Break,
    Linear,
    Constant,
};

