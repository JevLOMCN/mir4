#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSelectionType.generated.h"

UENUM(BlueprintType)
enum class EGameplayTagSelectionType : uint8 {
    None,
    NonRestrictedOnly,
    RestrictedOnly,
    All,
};

