#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ItemResult_FailInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemResult_FailInfo : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailGuideStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextPercentStrID;
    
    UMM_ItemResult_FailInfo();

};

