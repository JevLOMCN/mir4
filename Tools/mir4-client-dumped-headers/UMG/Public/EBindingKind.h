#pragma once
#include "CoreMinimal.h"
#include "EBindingKind.generated.h"

UENUM(BlueprintType)
enum class EBindingKind : uint8 {
    Function,
    Property,
};

