#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeOptionType.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeOptionType : uint8 {
    NONE,
    Actor_My,
    Actor_Other,
    Actor_NPC,
    UI_My,
    UI_Other,
    UI_NPC,
    GuildMark_My,
    GuildMark_Other,
    GuildName_My,
    GuildName_Other,
    MAX,
};

