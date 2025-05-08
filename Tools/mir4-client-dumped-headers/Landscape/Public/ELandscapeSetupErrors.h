#pragma once
#include "CoreMinimal.h"
#include "ELandscapeSetupErrors.generated.h"

UENUM(BlueprintType)
enum ELandscapeSetupErrors {
    LSE_None,
    LSE_NoLandscapeInfo,
    LSE_CollsionXY,
    LSE_NoLayerInfo,
};

