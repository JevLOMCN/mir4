#pragma once
#include "CoreMinimal.h"
#include "EFontHinting.generated.h"

UENUM(BlueprintType)
enum class EFontHinting : uint8 {
    Default,
    Auto,
    AutoLight,
    Monochrome,
    None,
};

