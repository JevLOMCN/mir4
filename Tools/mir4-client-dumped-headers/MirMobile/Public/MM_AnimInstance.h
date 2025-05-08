#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EFSM_TYPE.h"
#include "MM_AnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UMM_AnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSM_TYPE FSMType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubState;
    
    UMM_AnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void ResetSubState();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubState(int32 NewSubState);
    
};

