#pragma once
#include "CoreMinimal.h"
#include "ETutorialProgressType.generated.h"

UENUM(BlueprintType)
enum class ETutorialProgressType : uint8 {
    PAGE,
    SEQUENCEPLAY,
    EFFECTWIDGET,
};

