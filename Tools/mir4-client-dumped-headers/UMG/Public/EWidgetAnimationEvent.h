#pragma once
#include "CoreMinimal.h"
#include "EWidgetAnimationEvent.generated.h"

UENUM(BlueprintType)
enum class EWidgetAnimationEvent : uint8 {
    Started,
    Finished,
};

