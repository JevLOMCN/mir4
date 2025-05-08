#pragma once
#include "CoreMinimal.h"
#include "EPlayerClassID.generated.h"

UENUM(BlueprintType)
enum class EPlayerClassID : uint8 {
    NONE,
    PCW,
    PCM,
    PCT,
    PCA,
    PCZ,
};

