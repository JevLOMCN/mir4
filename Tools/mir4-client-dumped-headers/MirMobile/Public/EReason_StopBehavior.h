#pragma once
#include "CoreMinimal.h"
#include "EReason_StopBehavior.generated.h"

UENUM(BlueprintType)
enum class EReason_StopBehavior : uint8 {
    Unknown,
    AttackEnd,
    UpdateCounterAttack,
    AutoMoveFinished,
    OnDie,
    QuestTracker,
    InputProcess,
    TaskStopBehavior,
    PhaseMode,
    CommandScript,
    Occupation,
    Plunder,
    ToggleUI,
    Debug,
    Sparring,
    Operating,
    Revival,
    ClickMenu,
    RecvServer,
    Cinematic,
    MissionHelper,
    StoryQuest,
    Warp,
    Trigger,
    LogOut,
    DisConnect,
    Landing,
};

