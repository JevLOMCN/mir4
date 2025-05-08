#pragma once
#include "CoreMinimal.h"
#include "EFacebookImageFormat.generated.h"

UENUM(BlueprintType)
enum class EFacebookImageFormat : uint8 {
    JPG,
    PNG,
    BMP,
    ICO,
    EXR,
    ICNS,
};

