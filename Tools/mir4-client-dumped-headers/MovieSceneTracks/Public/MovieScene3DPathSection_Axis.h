#pragma once
#include "CoreMinimal.h"
#include "MovieScene3DPathSection_Axis.generated.h"

UENUM(BlueprintType)
enum class MovieScene3DPathSection_Axis : uint8 {
    X,
    Y,
    Z,
    NEG_X,
    NEG_Y,
    NEG_Z,
};

