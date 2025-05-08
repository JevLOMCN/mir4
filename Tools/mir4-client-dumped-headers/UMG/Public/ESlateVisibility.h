#pragma once
#include "CoreMinimal.h"
#include "ESlateVisibility.generated.h"

UENUM(BlueprintType)
enum class ESlateVisibility : uint8 {
    Visible,
    Collapsed,
    Hidden,
    HitTestInvisible,
    SelfHitTestInvisible,
};

