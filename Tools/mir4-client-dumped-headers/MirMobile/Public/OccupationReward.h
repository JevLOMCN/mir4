#pragma once
#include "CoreMinimal.h"
#include "EOccupationRewardType.h"
#include "OccupationReward.generated.h"

USTRUCT(BlueprintType)
struct FOccupationReward {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOccupationRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    MIRMOBILE_API FOccupationReward();
};

