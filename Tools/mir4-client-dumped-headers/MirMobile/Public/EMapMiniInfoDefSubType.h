#pragma once
#include "CoreMinimal.h"
#include "EMapMiniInfoDefSubType.generated.h"

UENUM(BlueprintType)
enum class EMapMiniInfoDefSubType : uint8 {
    None,
    Portal = 2,
    Area,
    ShopNPC = 1,
    Max = Portal,
};

