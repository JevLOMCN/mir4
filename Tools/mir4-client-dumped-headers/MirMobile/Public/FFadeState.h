#pragma once
#include "CoreMinimal.h"
#include "FFadeState.generated.h"

UENUM(BlueprintType)
enum class FFadeState : uint8 {
    StopFade,
    StartFadeIn,
    StartFadeOut,
};

