#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "IntervalCountdown.h"
#include "BTTask_BlueprintBase.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTTask_BlueprintBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntervalCountdown TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPropertyDetails: 1;
    
public:
    UBTTask_BlueprintBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetFinishOnMessageWithId(FName MessageName, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishOnMessage(FName MessageName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExecute(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAbort(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskExecuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskAborting() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishExecute(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishAbort();
    
};

