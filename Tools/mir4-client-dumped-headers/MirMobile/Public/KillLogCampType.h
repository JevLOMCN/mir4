#pragma once
#include "CoreMinimal.h"
#include "KillLogCampType.generated.h"

UENUM(BlueprintType)
enum class KillLogCampType : uint8 {
    None,
    Defence,
    Offence,
};

