#pragma once
#include "CoreMinimal.h"
#include "InputEvent.h"
#include "NavigationEvent.generated.h"

USTRUCT(BlueprintType)
struct FNavigationEvent : public FInputEvent {
    GENERATED_BODY()
public:
    SLATECORE_API FNavigationEvent();
};

