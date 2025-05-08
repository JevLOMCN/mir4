#pragma once
#include "CoreMinimal.h"
#include "EEmissionPatternTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EEmissionPatternTypeEnum : uint8 {
    Chaos_Emission_Pattern_First_Frame,
    Chaos_Emission_Pattern_On_Demand,
};

