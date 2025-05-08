#pragma once
#include "CoreMinimal.h"
#include "EUserEvent_Siege_Team.generated.h"

UENUM(BlueprintType)
enum class EUserEvent_Siege_Team : uint8 {
    SiegeTeam_Home = 1,
    SiegeTeam_Away,
};

