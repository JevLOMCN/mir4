#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ItemSubCoolTimeTemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FItemSubCoolTimeTemplate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubCoolTimeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemSubType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SubCoolTime;
    
    FItemSubCoolTimeTemplate();
};

