#pragma once
#include "CoreMinimal.h"
#include "CHAT_CHANNEL_TYPE.generated.h"

UENUM()
enum class CHAT_CHANNEL_TYPE : int32 {
    NONE,
    WORLD = 2,
    GUILD = 4,
    PARTY = 8,
    SYSTEM = 16,
    WHISPER = 32,
    ALLIANCE = 64,
};

