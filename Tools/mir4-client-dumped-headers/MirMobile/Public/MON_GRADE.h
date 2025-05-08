#pragma once
#include "CoreMinimal.h"
#include "MON_GRADE.generated.h"

UENUM(BlueprintType)
enum class MON_GRADE : uint8 {
    None,
    Normal,
    Elite,
    MidBoss,
    StageBoss,
};

