#pragma once
#include "CoreMinimal.h"
#include "EPopupContentsState_CurDisplay.generated.h"

UENUM(BlueprintType)
enum class EPopupContentsState_CurDisplay : uint8 {
    None,
    Mastery,
    HolyStuff,
    Vehicle,
    Force,
};

