#pragma once
#include "CoreMinimal.h"
#include "EVertexColorMaskChannel.generated.h"

UENUM(BlueprintType)
enum class EVertexColorMaskChannel : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
    MAX_None,
};

