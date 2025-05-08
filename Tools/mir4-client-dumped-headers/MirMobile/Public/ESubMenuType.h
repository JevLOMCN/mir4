#pragma once
#include "CoreMinimal.h"
#include "ESubMenuType.generated.h"

UENUM()
enum class ESubMenuType : int32 {
    None,
    FieldBoss = 4600,
    WorldBoss = 4700,
    MAX_INDEX,
};

