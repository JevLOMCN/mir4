#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ELandscapeLayerDisplayMode : uint8 {
    Default,
    Alphabetical,
    UserSpecific,
};

