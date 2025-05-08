#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagMatchType.generated.h"

UENUM(BlueprintType)
namespace EGameplayTagMatchType {
    enum Type {
        Explicit,
        IncludeParentTags,
    };
}

