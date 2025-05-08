#pragma once
#include "CoreMinimal.h"
#include "EFieldResolutionType.generated.h"

UENUM(BlueprintType)
enum EFieldResolutionType {
    Field_Resolution_Minimal,
    Field_Resolution_DisabledParents,
    Field_Resolution_Maximum,
};

