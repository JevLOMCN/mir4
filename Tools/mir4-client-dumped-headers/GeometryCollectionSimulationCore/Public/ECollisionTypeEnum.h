#pragma once
#include "CoreMinimal.h"
#include "ECollisionTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ECollisionTypeEnum : uint8 {
    Chaos_Volumetric,
    Chaos_Surface_Volumetric,
};

