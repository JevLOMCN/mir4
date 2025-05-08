#pragma once
#include "CoreMinimal.h"
#include "EGachaViewType.generated.h"

UENUM(BlueprintType)
enum class EGachaViewType : uint8 {
    None,
    Tombstone,
    Full,
    Interaction,
};

