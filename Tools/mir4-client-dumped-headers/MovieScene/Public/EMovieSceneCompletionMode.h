#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionMode.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneCompletionMode : uint8 {
    KeepState,
    RestoreState,
    ProjectDefault,
};

