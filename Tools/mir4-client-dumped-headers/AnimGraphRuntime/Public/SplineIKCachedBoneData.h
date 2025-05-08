#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "SplineIKCachedBoneData.generated.h"

USTRUCT(BlueprintType)
struct FSplineIKCachedBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefSkeletonIndex;
    
    ANIMGRAPHRUNTIME_API FSplineIKCachedBoneData();
};

