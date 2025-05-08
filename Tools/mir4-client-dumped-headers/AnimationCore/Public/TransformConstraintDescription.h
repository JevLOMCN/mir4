#pragma once
#include "CoreMinimal.h"
#include "ConstraintDescriptionEx.h"
#include "ETransformConstraintType.h"
#include "TransformConstraintDescription.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FTransformConstraintDescription : public FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformConstraintType TransformType;
    
    FTransformConstraintDescription();
};

