#pragma once
#include "CoreMinimal.h"
#include "PhotoMode_Pose.generated.h"

USTRUCT(BlueprintType)
struct FPhotoMode_Pose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoseAnimIndex;
    
    MIRMOBILE_API FPhotoMode_Pose();
};

