#pragma once
#include "CoreMinimal.h"
#include "InputEvent.h"
#include "MotionEvent.generated.h"

USTRUCT(BlueprintType)
struct FMotionEvent : public FInputEvent {
    GENERATED_BODY()
public:
    SLATECORE_API FMotionEvent();
};

