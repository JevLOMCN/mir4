#pragma once
#include "CoreMinimal.h"
#include "ECastleContents.generated.h"

UENUM()
enum class ECastleContents : int32 {
    NONE = -1,
    DOMINION_TITLE = 0,
    DOMINION_ADMIN,
    DOMINION_WANTED,
    BUFF,
    PRIZE_MAIN,
    PRIZE_SUB,
    TAX_RATE_CHANGE,
    TAX_WITHDRAWAL,
    DONATION,
    STORAGE,
    GuildMember,
};

