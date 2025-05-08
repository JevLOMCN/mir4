#pragma once
#include "CoreMinimal.h"
#include "EBoneModificationMode.generated.h"

UENUM(BlueprintType)
enum EBoneModificationMode {
    BMM_Ignore,
    BMM_Replace,
    BMM_Additive,
};

