#pragma once
#include "CoreMinimal.h"
#include "EDrivenBoneModificationMode.generated.h"

UENUM(BlueprintType)
enum class EDrivenBoneModificationMode : uint8 {
    AddToInput,
    ReplaceComponent,
    AddToRefPose,
};

