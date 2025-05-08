#pragma once
#include "CoreMinimal.h"
#include "EAppleTextureType.generated.h"

UENUM(BlueprintType)
enum class EAppleTextureType : uint8 {
    Unknown,
    Image,
    PixelBuffer,
    Surface,
    MetalTexture,
};

