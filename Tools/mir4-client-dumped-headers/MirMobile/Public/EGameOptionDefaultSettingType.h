#pragma once
#include "CoreMinimal.h"
#include "EGameOptionDefaultSettingType.generated.h"

UENUM(BlueprintType)
enum class EGameOptionDefaultSettingType : uint8 {
    Table = 1,
    Device,
};

