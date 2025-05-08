#pragma once
#include "CoreMinimal.h"
#include "EMirSoundDataType.generated.h"

UENUM(BlueprintType)
enum class EMirSoundDataType : uint8 {
    VEHICLE_OFF,
    GET_ENERGY,
    PC_REVIVAL,
    BUTTON_CLICK_COMMON,
    DROP_COIN,
};

