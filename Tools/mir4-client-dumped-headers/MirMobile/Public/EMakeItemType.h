#pragma once
#include "CoreMinimal.h"
#include "EMakeItemType.generated.h"

UENUM()
enum class EMakeItemType : int32 {
    Normal,
    Normal_Agency,
    Special_UI_Item,
    Special_NPC_Item,
};

