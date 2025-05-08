#pragma once
#include "CoreMinimal.h"
#include "EFieldCullingOperationType.generated.h"

UENUM(BlueprintType)
enum EFieldCullingOperationType {
    Field_Culling_Inside,
    Field_Culling_Outside,
    Field_Culling_Operation_Max UMETA(Hidden),
};

