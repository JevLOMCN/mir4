#pragma once
#include "CoreMinimal.h"
#include "BoneMinMaxData.h"
#include "EBoneDataType.h"
#include "CustomBoneData.generated.h"

USTRUCT(BlueprintType)
struct FCustomBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoneDataType BoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneMinMaxData> BoneMinMaxDataArray;
    
    MIRMOBILE_API FCustomBoneData();
};

