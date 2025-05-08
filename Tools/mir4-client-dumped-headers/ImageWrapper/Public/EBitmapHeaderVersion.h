#pragma once
#include "CoreMinimal.h"
#include "EBitmapHeaderVersion.generated.h"

UENUM(BlueprintType)
enum class EBitmapHeaderVersion : uint8 {
    BHV_BITMAPINFOHEADER,
    BHV_BITMAPV2INFOHEADER,
    BHV_BITMAPV3INFOHEADER,
    BHV_BITMAPV4HEADER,
    BHV_BITMAPV5HEADER,
};

