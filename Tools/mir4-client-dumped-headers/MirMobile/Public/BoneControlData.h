#pragma once
#include "CoreMinimal.h"
#include "BoneControlData.generated.h"

USTRUCT(BlueprintType)
struct FBoneControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneAlpha;
    
    MIRMOBILE_API FBoneControlData();
};

