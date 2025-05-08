#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "DropRewardBoxTypeGroupTemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FDropRewardBoxTypeGroupTemplate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupTypeRewardBoxGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Drop_Reward_ObjectGroupID_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Drop_Reward_ObjectGroupID_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Drop_Reward_ObjectGroupID_C;
    
    FDropRewardBoxTypeGroupTemplate();
};

