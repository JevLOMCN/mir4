#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_DailyWork.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_DailyWork : public UMM_UIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_ERROR_CONTENTS_OPEN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_ERROR_CONTENTS_RUNNING;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_DAILY_WORK_PROGRESS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_DAILY_WORK_RECEIVEALL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_ERROR_END_QUEST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_ERROR_PLUS_REWARD_NONE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_ERROR_PLUS_REWARD_END;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_ERROR_RECEIVEALL;
    
public:
    UMM_UIAction_DailyWork();

};

