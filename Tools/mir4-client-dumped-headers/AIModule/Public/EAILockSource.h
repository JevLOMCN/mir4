#pragma once
#include "CoreMinimal.h"
#include "EAILockSource.generated.h"

UENUM(BlueprintType)
namespace EAILockSource {
    enum Type {
        Animation,
        Logic,
        Script,
        Gameplay,
        MAX,
    };
}

