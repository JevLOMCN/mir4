#pragma once
#include "CoreMinimal.h"
#include "VoiceDownState.generated.h"

UENUM(BlueprintType)
enum class VoiceDownState : uint8 {
    None,
    NeedDownload,
    Downloading,
};

