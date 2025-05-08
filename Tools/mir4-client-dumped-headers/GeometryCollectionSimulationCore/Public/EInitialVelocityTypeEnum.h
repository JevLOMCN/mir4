#pragma once
#include "CoreMinimal.h"
#include "EInitialVelocityTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EInitialVelocityTypeEnum : uint8 {
    Chaos_Initial_Velocity_User_Defined,
    Chaos_Initial_Velocity_None,
};

