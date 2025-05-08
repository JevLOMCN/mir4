#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_QuestNormalAuto.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_QuestNormalAuto : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_QuestNormalAuto();

    UFUNCTION(BlueprintCallable)
    void StopAutoMission();
    
    UFUNCTION(BlueprintCallable)
    void ResumeAutoMission();
    
};

