#pragma once
#include "CoreMinimal.h"
#include "InputEvent.h"
#include "KeyEvent.generated.h"

USTRUCT(BlueprintType)
struct FKeyEvent : public FInputEvent {
    GENERATED_BODY()
public:
    SLATECORE_API FKeyEvent();
};

