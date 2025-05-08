#pragma once
#include "CoreMinimal.h"
#include "EFontLoadingPolicy.generated.h"

UENUM(BlueprintType)
enum class EFontLoadingPolicy : uint8 {
    LazyLoad,
    Stream,
    Inline,
};

