#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCaptureProtocolState.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneCaptureProtocolState : uint8 {
    Idle,
    Initialized,
    Capturing,
    Finalizing,
};

