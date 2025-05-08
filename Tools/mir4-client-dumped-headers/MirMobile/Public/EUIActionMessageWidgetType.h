#pragma once
#include "CoreMinimal.h"
#include "EUIActionMessageWidgetType.generated.h"

UENUM()
enum class EUIActionMessageWidgetType : int32 {
    None,
    Headline,
    HudBottom,
    HudGetItem,
    Top,
    Screen,
    ContentsGetItem,
    QuickItemAction,
    GM_Message,
    Max,
};

