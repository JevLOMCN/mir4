#pragma once
#include "CoreMinimal.h"
#include "ESequenceEvalReinit.generated.h"

UENUM(BlueprintType)
namespace ESequenceEvalReinit {
    enum Type {
        NoReset,
        StartPosition,
        ExplicitTime,
    };
}

