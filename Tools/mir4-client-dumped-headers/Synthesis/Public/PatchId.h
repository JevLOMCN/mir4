#pragma once
#include "CoreMinimal.h"
#include "PatchId.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FPatchId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FPatchId();
};

