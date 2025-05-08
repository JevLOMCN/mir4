#pragma once
#include "CoreMinimal.h"
#include "ImageSize.generated.h"

UENUM(BlueprintType)
enum ImageSize {
    Original,
    Max256 = 256,
    Max512 = 512,
    Max1024 = 1024,
    Max2048 = 2048,
};

