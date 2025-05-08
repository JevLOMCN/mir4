#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETaskResourceOverlapPolicy.h"
#include "GameplayTaskOwnerInterface.h"
#include "GameplayTask.generated.h"

class UGameplayTask;

UCLASS(Abstract, Blueprintable, Config=Game)
class GAMEPLAYTASKS_API UGameplayTask : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGenericGameplayTaskDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstanceName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETaskResourceOverlapPolicy ResourceOverlapPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask* ChildTask;
    
public:
    UGameplayTask();

    UFUNCTION(BlueprintCallable)
    void ReadyForActivation();
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    

    // Fix for true pure virtual functions not being implemented
};

