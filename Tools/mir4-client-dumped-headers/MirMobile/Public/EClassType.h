#pragma once
#include "CoreMinimal.h"
#include "EClassType.generated.h"

UENUM(BlueprintType)
enum class EClassType : uint8 {
    NONE,
    PCW,
    PCM,
    PCT,
    PCA,
    PCZ,
};

