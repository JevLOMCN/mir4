#pragma once
#include "CoreMinimal.h"
#include "EPawnActionResult.h"
#include "PawnAction.h"
#include "PawnAction_BlueprintBase.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AIMODULE_API UPawnAction_BlueprintBase : public UPawnAction {
    GENERATED_BODY()
public:
    UPawnAction_BlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionTick(APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionStart(APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionResume(APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionPause(APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionFinished(APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    
};

