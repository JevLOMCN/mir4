#pragma once
#include "CoreMinimal.h"
#include "EHMDWornState.generated.h"

UENUM(BlueprintType)
namespace EHMDWornState {
    enum Type {
        Unknown,
        Worn,
        NotWorn,
    };
}

