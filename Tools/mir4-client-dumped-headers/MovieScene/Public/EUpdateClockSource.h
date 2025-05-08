#pragma once
#include "CoreMinimal.h"
#include "EUpdateClockSource.generated.h"

UENUM(BlueprintType)
enum class EUpdateClockSource : uint8 {
    Tick,
    Platform,
    Audio,
    Timecode,
};

