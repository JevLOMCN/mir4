#pragma once
#include "CoreMinimal.h"
#include "CHAT_AREA_FLAG.generated.h"

UENUM(BlueprintType)
enum class CHAT_AREA_FLAG : uint8 {
    NONE,
    WORLD = 2,
    GUILD = 4,
    PARTY = 8,
    SYSTEM = 16,
    WHISPER = 32,
    ALLIANCE = 64,
    DEFAULT_MENU = 110,
    MACRO_MENU = DEFAULT_MENU,
    VOICE_CHAT_MENU = 12,
};

