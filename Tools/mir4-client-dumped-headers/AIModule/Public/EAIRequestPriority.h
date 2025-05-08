#pragma once
#include "CoreMinimal.h"
#include "EAIRequestPriority.generated.h"

UENUM(BlueprintType)
namespace EAIRequestPriority {
    enum Type {
        SoftScript,
        Logic,
        HardScript,
        Reaction,
        Ultimate,
        MAX,
    };
}

