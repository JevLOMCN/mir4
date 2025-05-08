#pragma once
#include "CoreMinimal.h"
#include "EReason_FixedSync.generated.h"

UENUM(BlueprintType)
enum class EReason_FixedSync : uint8 {
    None,
    SyncStateError,
    Fixed_Idle,
    Fixed_Arrive,
    CancelOperating,
    ExecuteAttack,
    ExcuteScript_Dash,
    ExcuteScript_Run,
    ExcuteScript_Walk,
    HealTarget,
    RunAway,
    Patrol,
    WarpToLocation,
    WarpToChar,
    MoveToDest,
    TraceDirTarget,
    AttackFSM,
    NetPC_Move,
    SecondLineTrace,
    PushPull,
    Hit,
    StartRun,
    EndFSM_Idle,
};

