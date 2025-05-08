#pragma once
#include "CoreMinimal.h"
#include "EActorSequenceObjectReferenceType.generated.h"

UENUM(BlueprintType)
enum class EActorSequenceObjectReferenceType : uint8 {
    ContextActor,
    ExternalActor,
    Component,
};

