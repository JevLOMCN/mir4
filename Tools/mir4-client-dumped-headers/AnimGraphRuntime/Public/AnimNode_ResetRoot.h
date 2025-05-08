#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
#include "AnimNode_ResetRoot.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_ResetRoot();
};

