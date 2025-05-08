#pragma once
#include "CoreMinimal.h"
#include "EStretch.generated.h"

UENUM(BlueprintType)
namespace EStretch {
    enum Type {
        None,
        Fill,
        ScaleToFit,
        ScaleToFitX,
        ScaleToFitY,
        ScaleToFill,
        ScaleBySafeZone,
        UserSpecified,
    };
}

