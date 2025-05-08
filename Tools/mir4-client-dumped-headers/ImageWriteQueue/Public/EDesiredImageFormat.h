#pragma once
#include "CoreMinimal.h"
#include "EDesiredImageFormat.generated.h"

UENUM(BlueprintType)
enum class EDesiredImageFormat : uint8 {
    PNG,
    JPG,
    BMP,
    EXR,
};

