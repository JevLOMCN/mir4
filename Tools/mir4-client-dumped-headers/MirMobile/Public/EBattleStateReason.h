#pragma once
#include "CoreMinimal.h"
#include "EBattleStateReason.generated.h"

UENUM(BlueprintType)
enum class EBattleStateReason : uint8 {
    ExecuteSkill,
    RollEnter,
    RollExit,
    Hit,
    BuffHit,
    TimeOut,
    AppearUser,
    RecvServer,
    RecvAttack,
};

