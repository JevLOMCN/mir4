#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_QuestObtain.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_QuestObtain : public UMM_UIAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MissionZoneToStr;
    
    UMM_UIAction_QuestObtain();

    UFUNCTION(BlueprintCallable)
    void OnClickReqReward();
    
};

