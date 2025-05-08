#pragma once
#include "CoreMinimal.h"
#include "EGameplayContainerMatchType.generated.h"

UENUM(BlueprintType)
enum class EGameplayContainerMatchType : uint8 {
    Any,
    All,
};

