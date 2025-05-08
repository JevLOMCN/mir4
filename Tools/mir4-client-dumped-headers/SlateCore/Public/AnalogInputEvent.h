#pragma once
#include "CoreMinimal.h"
#include "KeyEvent.h"
#include "AnalogInputEvent.generated.h"

USTRUCT(BlueprintType)
struct FAnalogInputEvent : public FKeyEvent {
    GENERATED_BODY()
public:
    SLATECORE_API FAnalogInputEvent();
};

