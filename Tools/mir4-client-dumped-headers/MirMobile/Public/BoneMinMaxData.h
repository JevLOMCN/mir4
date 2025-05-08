#pragma once
#include "CoreMinimal.h"
#include "EBoneVectorType.h"
#include "BoneMinMaxData.generated.h"

USTRUCT(BlueprintType)
struct FBoneMinMaxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneVectorType BoneVectorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneMaxValue;
    
    MIRMOBILE_API FBoneMinMaxData();
};

