#pragma once
#include "CoreMinimal.h"
#include "GUIDE_TYPE.generated.h"

UENUM(BlueprintType)
enum class GUIDE_TYPE : uint8 {
    None,
    SectorForm,
    Circle,
    Direct,
    Cross,
};

