#pragma once
#include "CoreMinimal.h"
#include "EGatherObjectType.generated.h"

UENUM(BlueprintType)
enum class EGatherObjectType : uint8 {
    NORMAL,
    Drop_Object,
    SIEGEREVIVALFLAG = 11,
    SPARRINGOBJ = 21,
    SANCTUMSHRINE = 31,
    PLUNDERBOX = 41,
    ITEM_DISPLAY = 51,
};

