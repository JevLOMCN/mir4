#pragma once
#include "CoreMinimal.h"
#include "EAutoMoveState.generated.h"

UENUM(BlueprintType)
enum class EAutoMoveState : uint8 {
    None,
    AutoMove_Map,
    AutoMove_Quest,
    AutoMove_ReturnToCenter,
    AutoMove_Gather,
    AutoMove_ForceMove,
    AutoMove_GroupMeditation,
    AutoMove_Unknown,
    AutoMove_Trace,
    AutoMove_SelfComebackbyBattle,
    AutoMove_SelfComebackbyCounter,
};

