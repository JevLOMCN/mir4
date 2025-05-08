#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_UserEvent_BattlePass.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_UserEvent_BattlePass : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_UserEvent_BattlePass();

    UFUNCTION(BlueprintCallable)
    void OnImmediateOK(int32 iMissionId);
    
};

