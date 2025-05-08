#pragma once
#include "CoreMinimal.h"
#include "EFieldOperationType.generated.h"

UENUM(BlueprintType)
enum EFieldOperationType {
    Field_Multiply,
    Field_Divide,
    Field_Add,
    Field_Substract,
    Field_Operation_Max UMETA(Hidden),
};

