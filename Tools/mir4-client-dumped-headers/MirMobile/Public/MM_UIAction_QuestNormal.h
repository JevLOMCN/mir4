#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_QuestNormal.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_QuestNormal : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_QuestNormal();

private:
    UFUNCTION(BlueprintCallable)
    void ShowErrorMessage();
    
public:
    UFUNCTION(BlueprintCallable)
    void RunMoveMissionForCoopMission();
    
    UFUNCTION(BlueprintCallable)
    void RunMoveMission();
    
private:
    UFUNCTION(BlueprintCallable)
    void RunMissionWithPortal();
    
    UFUNCTION(BlueprintCallable)
    void OnTimeOutRewardFinal();
    
    UFUNCTION(BlueprintCallable)
    void OnTimeOutReward();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClickStageType(int32 StageType);
    
    UFUNCTION(BlueprintCallable)
    void OnClickStage(int32 GroupId);
    
private:
    UFUNCTION(BlueprintCallable)
    void DelayShowThrobber();
    
};

