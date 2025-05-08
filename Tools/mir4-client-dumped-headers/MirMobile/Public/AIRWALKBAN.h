#pragma once
#include "CoreMinimal.h"
#include "AIRWALKBAN.generated.h"

UENUM(BlueprintType)
enum class AIRWALKBAN : uint8 {
    AIRWALK_NOLIMITE,
    AIRWALK_FIRSTJUMP,
    AIRWALK_SECONDJUMP,
    AIRWALK_DISABLE,
};

