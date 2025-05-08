#pragma once
#include "CoreMinimal.h"
#include "EFirstTutorialType.generated.h"

UENUM(BlueprintType)
enum class EFirstTutorialType : uint8 {
    NONE,
    VirtualJoyStick,
    QuestTracker,
    NpcQuestMark,
    HudHideQuest,
    Battle,
};

