#pragma once
#include "CoreMinimal.h"
#include "EContentsGetItemMsgType.generated.h"

UENUM(BlueprintType)
enum class EContentsGetItemMsgType : uint8 {
    Single_Item,
    Single_Cost,
    Multiple,
    Special,
    MakeSuccess_Item,
    MakeSuccessBonus_Item,
    MakeFail_Item,
};

