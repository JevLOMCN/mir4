#pragma once
#include "CoreMinimal.h"
#include "InputEvent.h"
#include "CharacterEvent.generated.h"

USTRUCT(BlueprintType)
struct FCharacterEvent : public FInputEvent {
    GENERATED_BODY()
public:
    SLATECORE_API FCharacterEvent();
};

