#pragma once
#include "CoreMinimal.h"
#include "EDescendantScrollDestination.generated.h"

UENUM(BlueprintType)
enum class EDescendantScrollDestination : uint8 {
    IntoView,
    TopOrLeft,
    Center,
};

