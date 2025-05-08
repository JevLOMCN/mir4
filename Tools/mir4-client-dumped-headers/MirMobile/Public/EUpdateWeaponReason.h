#pragma once
#include "CoreMinimal.h"
#include "EUpdateWeaponReason.generated.h"

UENUM(BlueprintType)
enum class EUpdateWeaponReason : uint8 {
    ChangeItemParts,
    UpdateCostume,
    ChangeFeature,
    SetMining,
    ClearMining,
    EnterIdle,
};

