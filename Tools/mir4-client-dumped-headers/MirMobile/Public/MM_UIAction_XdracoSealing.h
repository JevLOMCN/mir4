#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_XdracoSealing.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMM_UIAction_XdracoSealing : public UMM_UIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time_NextMessage_MakeItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ANIEND_TIME_FAIL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ANIEND_TIME_SUCCESS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ANIEND_TIME_GREATESUCCESS;
    
public:
    UMM_UIAction_XdracoSealing();

};

