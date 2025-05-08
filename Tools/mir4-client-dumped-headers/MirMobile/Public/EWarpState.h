#pragma once
#include "CoreMinimal.h"
#include "EWarpState.generated.h"

UENUM(BlueprintType)
enum class EWarpState : uint8 {
    None,
    Cast,
    Start,
    End,
};

