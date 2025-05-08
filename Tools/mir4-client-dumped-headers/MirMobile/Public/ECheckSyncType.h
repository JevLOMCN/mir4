#pragma once
#include "CoreMinimal.h"
#include "ECheckSyncType.generated.h"

UENUM(BlueprintType)
enum class ECheckSyncType : uint8 {
    Tick_AutoMove,
    Tick_ManualMove,
    Tick_UnableMove,
    Tick_NotNaviMove,
};

