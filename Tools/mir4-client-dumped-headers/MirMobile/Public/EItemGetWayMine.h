#pragma once
#include "CoreMinimal.h"
#include "EItemGetWayMine.generated.h"

UENUM(BlueprintType)
enum class EItemGetWayMine : uint8 {
    MineNormal = 1,
    MineSpecial,
    Mine_BlockIron,
};

