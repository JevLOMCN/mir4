#pragma once
#include "CoreMinimal.h"
#include "EBlendListTransitionType.generated.h"

UENUM(BlueprintType)
enum class EBlendListTransitionType : uint8 {
    StandardBlend,
    Inertialization,
};

