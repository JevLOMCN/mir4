#pragma once
#include "CoreMinimal.h"
#include "ETeamAttitude.generated.h"

UENUM(BlueprintType)
namespace ETeamAttitude {
    enum Type {
        Friendly,
        Neutral,
        Hostile,
    };
}

