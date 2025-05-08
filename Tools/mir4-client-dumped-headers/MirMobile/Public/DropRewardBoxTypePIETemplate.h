#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "DropRewardBoxTypePIETemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FDropRewardBoxTypePIETemplate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PieTypeRewardBoxGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DROP_REWARD_OBJECTGROUPID;
    
    FDropRewardBoxTypePIETemplate();
};

