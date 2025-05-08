#pragma once
#include "CoreMinimal.h"
#include "EMediaPlayerTrack.generated.h"

UENUM(BlueprintType)
enum class EMediaPlayerTrack : uint8 {
    Audio,
    Caption,
    Metadata,
    Script,
    Subtitle,
    Text,
    Video,
};

