#pragma once
#include "CoreMinimal.h"
#include "ETriggerScriptType.generated.h"

UENUM()
enum class ETriggerScriptType : int32 {
    BATTLESTART,
    BATTLESTOP,
    CAMERAFOCUS,
    CAMERASET,
    CAMERASHAKE,
    DELAY,
    FADE,
    HUDHIDE,
    HUDSHOW,
    MONSTERANIM,
    MONSTERBB,
    MONSTERHIDE,
    MONSTERRUN,
    NPCANIM,
    NPCBB,
    NPCHIDE,
    NPCJUMP,
    NPCRUN,
    NPCSEARCHRUN,
    PCBB,
    SMALLTALK,
    STRINGMESSAGE,
};

