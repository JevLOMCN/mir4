#pragma once
#include "CoreMinimal.h"
#include "DAMAGE_TYPE.generated.h"

UENUM(BlueprintType)
enum class DAMAGE_TYPE : uint8 {
    None,
    Physical,
    Magic,
};

