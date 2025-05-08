#pragma once
#include "CoreMinimal.h"
#include "ESkillCoolState.generated.h"

UENUM(BlueprintType)
enum class ESkillCoolState : uint8 {
    None,
    Global_Init,
    Global_After,
    Waiting,
    Cool,
};

