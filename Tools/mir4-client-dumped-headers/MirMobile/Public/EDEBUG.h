#pragma once
#include "CoreMinimal.h"
#include "EDEBUG.generated.h"

UENUM(BlueprintType)
namespace EDEBUG {
    enum Type {
        NONE,
        GAME_MODE,
        WIDGET_VISIBLE,
        TEMPITEM_CREATE,
        CHAR_STAT,
        NET_PC,
        PC_STATE,
        BATTLE,
        ITEM_WIDGET_SORT,
    };
}

