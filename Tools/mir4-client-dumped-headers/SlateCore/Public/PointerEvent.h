#pragma once
#include "CoreMinimal.h"
#include "InputEvent.h"
#include "PointerEvent.generated.h"

USTRUCT(BlueprintType)
struct FPointerEvent : public FInputEvent {
    GENERATED_BODY()
public:
    SLATECORE_API FPointerEvent();
};

