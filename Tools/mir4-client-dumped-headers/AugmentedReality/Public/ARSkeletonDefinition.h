#pragma once
#include "CoreMinimal.h"
#include "ARSkeletonDefinition.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARSkeletonDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumJoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> JointNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ParentIndices;
    
    FARSkeletonDefinition();
};

