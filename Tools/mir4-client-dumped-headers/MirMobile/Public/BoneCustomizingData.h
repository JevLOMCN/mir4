#pragma once
#include "CoreMinimal.h"
#include "CustomBoneData.h"
#include "BoneCustomizingData.generated.h"

USTRUCT(BlueprintType)
struct FBoneCustomizingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomBoneData> BoneDataArray;
    
    MIRMOBILE_API FBoneCustomizingData();
};

