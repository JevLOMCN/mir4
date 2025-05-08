#pragma once
#include "CoreMinimal.h"
#include "EFieldFalloffType.generated.h"

UENUM(BlueprintType)
enum EFieldFalloffType {
    Field_FallOff_None,
    Field_Falloff_Linear,
    Field_Falloff_Inverse,
    Field_Falloff_Squared,
    Field_Falloff_Logarithmic,
    Field_Falloff_Max UMETA(Hidden),
};

