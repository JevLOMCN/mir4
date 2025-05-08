#pragma once
#include "CoreMinimal.h"
#include "EConstraintType.h"
#include "ConstraintDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FConstraintDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstraintType Type;
    
    ANIMATIONCORE_API FConstraintDescriptor();
};

