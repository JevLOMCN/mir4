#pragma once
#include "CoreMinimal.h"
#include "EMediaPlayerOptionBooleanOverride.generated.h"

UENUM(BlueprintType)
enum class EMediaPlayerOptionBooleanOverride : uint8 {
    UseMediaPlayerSetting,
    Enabled,
    Disabled,
};

